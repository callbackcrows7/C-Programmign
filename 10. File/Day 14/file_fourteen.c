#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

struct ADDRESS {
    char street[25];
    char city[10];
    char division[10];
    int zip_code;
};

struct PERSON {
    char first_name[25];
    char last_name[25];
    int age;
    char job_status[15];
    float salary;
    struct ADDRESS *address;
};

// Function prototypes
void read_person_from_file(int fd, struct PERSON *person);
void clear_console();
void print_person_details(const struct PERSON *person);
// ssize_t read_line(int fd, char *buffer, size_t size);

int main(void) {
    struct PERSON *persons;

    // Define an int type variable person_num
    int persons_num;

    // Get how many persons details do you wanna write in the database
    printf("How many persons details do you wanna read from the database?: ");
    scanf("%d",  &persons_num);
    getchar(); // To consume the newline character left by previous scanf.

    // Clear the console
    clear_console();

    // Allocate memory for persons array
    persons = (struct PERSON *)malloc(persons_num * sizeof(struct PERSON));
    if (persons == NULL) {
        perror("Failed to allocate memory for persons");
        return 1;
    }

    // Declare a file path
    const char *file_path = "E://Work Station//01. C Programming//01. VS Code//Example//person.txt";

    // Check if the file exists
    if (access(file_path, W_OK) == -1) {
        printf("The file %s does not exist.\n", file_path);
    }

    // Define a int type file descriptor fd and open it read-only mode
    int fd = open(file_path, O_RDONLY);

    // Check if the file descriptor is open or not
    if (fd == -1) {
        perror("Error opening file");
        free(persons);
        return 1;
    }

    // Read the person information from the file
    for (int i = 0; i < persons_num; i++) {
        // Allocate memory for the person -> address structure field
        persons[i].address = (struct ADDRESS *)malloc(sizeof(struct ADDRESS));
        // Check memory allocation successfully or not
        if (persons[i].address == NULL) {
            // Print error message
            perror("Failed to allocate memory for address");
            // Free allocated memory(persons[i].address)
            for (int j = 0; j <= i; j++) {
                free(persons[j].address);
            }
            // Free allocated memory(person)
            free(persons);
            close(fd); // Close file descriptor
            return 1; // Exit the program with an error code
        }
        // Read person information from the persons.txt file and store it in the persons array of struct.
        read_person_from_file(fd, &persons[i]);
    }

    // Close the file
    if (close(fd) == -1) {
        perror("Error closing file");
        for (int i = 0; i < persons_num; i++) {
            free(persons[i].address);
        }
        free(persons);
        return 1;
    }

    // Display information about each person
    for (int i = 0; i < persons_num; i++) {
        printf("Details about person[%d]\n", i + 1);
        print_person_details(&persons[i]);
        printf("\n");
    }

    // Free allocated memory(persons[i].address)
    for (int i = 0; i < persons_num; i++) {
        free(persons[i].address);  // Free the address structure
    }
    free(persons);  // Free the persons array

    return 0;
}

void read_person_from_file(int fd, struct PERSON *person) {
    // Define a char type array buffer.
    char buffer[1024];

    // Read data from the file descriptor to buffer
    read(fd, &buffer, sizeof(buffer));

    // Read data from buffer and write to structure
    sscanf(buffer, "Details about person[%*d]\n"); // Skips the line "Details about person[N]"
    sscanf(buffer, "First Name: %[^\n]", person->first_name); // Read first name
    sscanf(buffer, "Last Name: %[^\n]", person->last_name); // Read the last name
    sscanf(buffer, "Age: %d", &person->age); // Read the age
    sscanf(buffer, "Job Status: %[^\n]", person->job_status); // Read the job status
    sscanf(buffer, "Salary: %f", &person->salary); // Read the salary
    sscanf(buffer, "Street: %[^\n]", person->address->street); // Read the street
    sscanf(buffer, "City: %[^\n]", person->address->city); // Read 
    sscanf(buffer, "Division: %[^\n]", person->address->division); // Read the division
    sscanf(buffer, "Zip Code: %d", &person->address->zip_code); // Read the zip code
}

// Function to clear the console (cross  platform) compilation
void clear_console(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
} 

// Function to print persons information
void print_person_details(const struct PERSON *person) {
    printf("First Name: %s\n", person->first_name);
    printf("Last Name: %s\n", person->last_name);
    printf("Age: %d\n", person->age);
    printf("Job Status: %s\n", person->job_status);
    printf("Salary: %.2f\n", person->salary);
    printf("Street: %s\n", person->address->street);
    printf("City: %s\n", person->address->city);
    printf("Division: %s\n", person->address->division);
    printf("Zip Code: %d\n", person->address->zip_code);
}