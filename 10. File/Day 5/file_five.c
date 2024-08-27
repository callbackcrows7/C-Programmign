#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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
void read_person_from_file(FILE *fp, struct PERSON *person);
void print_person_details(const struct PERSON *person);
void check_r_status(FILE *fp);

int main(void) {
    struct PERSON *persons;

    // Define an int type variable person_num
    int persons_num;

    // Get how many persons details do you wanna read from the database
    printf("How many persons details do you wanna read from the database?: ");
    scanf("%d",  &persons_num);
    getchar(); // To consume the newline character left by previous scanf.
    system("cls || clear"); // Clear the console.

    // Allocate memory for persons array
    persons = (struct PERSON *)malloc(persons_num * sizeof(struct PERSON));
    if (persons == NULL) {
        perror("Failed to allocate memory for persons");
        return 1;
    }

    // Declare a file path.
    const char *file_path = "E://Work Station//01. C Programming//01. VS Code//Example//person.txt";

    // Check if the file exists
    if (access(file_path, W_OK) == -1) {
        printf("The file %s does not exist.\n", file_path);
    }
    
    // Define and open a file pointer in read mode
    FILE *fp = fopen(file_path, "r");

    // Check if the file pointer is open or not
    if (fp == NULL) {
        // Print error message
        perror("Error opening file.");
        return 1; // Exit the program with an error message.
    }

    // Read the person information from the file
    for (int i = 0; i < persons_num; i++) {
        // Allocate memory for the person -> address structure field
        persons[i].address = (struct ADDRESS *)malloc(sizeof(struct ADDRESS));
        // Check memory allocation successfully or not
        if (persons[i].address == NULL) {
            // Print error massage
            perror("Failed to allocate memory for address");
            // Free allocated memory(persons[i].address)
            for (int j = 0; j<= i; j++) {
                free(persons[j].address);
            }
            // Free allocated memory(persons)
            free(persons);
            fclose(fp); // close file pointer
            return 1; // Exit the program with an error code
        }
        // Read person information from the persons.txt file and store it in the persons array of struct.
        read_person_from_file(fp, &persons[i]);

        // Check reading error status
        check_r_status(fp);
    }

    // Close the file pointer
    if (fclose(fp) == EOF) {
        // Print error message
        perror("Failed to close file pointer");
        return 1; // Exit the program with an error code
    }

    // Display information about each person
    for (int i = 0; i < persons_num; i++) {
        printf("Details about person[%d]\n", i + 1);
        print_person_details(&persons[i]);
        printf("\n");
    }
    
    // Free allocated memory
    for (int i = 0; i < persons_num; i++) {
        free(persons[i].address);
    }
    free(persons);

    return 0;
}

// Function to read information about a person from file
void read_person_from_file(FILE *fp, struct PERSON *person) {
 fscanf(fp, "Details about person[%*d]\n");  // Skips the line "Details about person[x]"
 fscanf(fp, "First Name: %[^\n]\n", person->first_name);  // Reads the first name
 fscanf(fp, "Last Name: %[^\n]\n", person->last_name);  // Reads the last name
 fscanf(fp, "Age: %d\n", &person->age);  // Reads the age
 fscanf(fp, "Job Status: %[^\n]\n", person->job_status);  // Reads the job status
 fscanf(fp, "Salary: %f\n", &person->salary);  // Reads the salary
 fscanf(fp, "Street: %[^\n]\n", person->address->street);  // Reads the street address
 fscanf(fp, "City: %[^\n]\n", person->address->city);  // Reads the city
 fscanf(fp, "Division: %[^\n]\n", person->address->division);  // Reads the division
 fscanf(fp, "Zip Code: %d\n", &person->address->zip_code);  // Reads the zip code
 }

// Function to display a person's details
void print_person_details(const struct PERSON *person) {
    printf("First Name: %s\n", person->first_name);
    printf("Last Name: %s\n", person->last_name);
    printf("Age: %d\n", person->age);
    printf("Job status: %s\n", person->job_status);
    printf("Salary: %.2f\n", person->salary);
    printf("Street: %s\n", person->address->street);
    printf("City: %s\n", person->address->city);
    printf("Division: %s\n", person->address->division);
    printf("Zip code: %d\n", person->address->zip_code);
}

// Function to check reding error status
void check_r_status(FILE *fp) {
    // Check error status
    if (ferror(fp)) {
        // Print error message
        perror("Error reading to file");
        clearerr(fp); // Clear error flag
    }
}