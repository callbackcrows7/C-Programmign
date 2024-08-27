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
void get_info(struct PERSON *person);
void get_first_name(struct PERSON *person);
void get_last_name(struct PERSON *person);
void get_age(struct PERSON *person);
void get_job_status(struct PERSON *person);
void get_salary(struct PERSON *person);
void get_street(struct ADDRESS *address);
void get_city(struct ADDRESS *address);
void get_division(struct ADDRESS *address);
void get_zip_code(struct ADDRESS *address);

void print_person_details(const struct PERSON *person);
void write_person_to_file(int fd, const struct PERSON *person, int index);
int validate_age(int age);
int validate_salary(float salary);
int validate_zip_code(int zip_code);
void check_w_status(ssize_t write_status);

int main(void) {
    struct PERSON *persons;

    // Define an int type variable person_num
    int persons_num;

    // Get how many persons details do you wanna write in the database
    printf("How many persons details do you wanna write in the database?: ");
    scanf("%d",  &persons_num);
    getchar(); // To consume the newline character left by previous scanf.
    system("cls || clear"); // Clear the console.

    // Allocate memory for persons array
    persons = (struct PERSON *)malloc(persons_num * sizeof(struct PERSON));
    if (persons == NULL) {
        perror("Failed to allocate memory for persons");
        return 1;
    }

    // Collect information about persons
    for (int i = 0; i < persons_num; i++) {
        printf("Enter info about person[%d]: \n", i + 1);
        persons[i].address = (struct ADDRESS *)malloc(sizeof(struct ADDRESS));
        if (persons[i].address == NULL) {
            perror("Failed to allocate memory for address");
            return 1;
        }
        get_info(&persons[i]);
        system("cls || clear"); // clear console
    }

    // Display information about each person
    for (int i = 0; i < persons_num; i++) {
        printf("Details about person[%d]\n", i + 1);
        print_person_details(&persons[i]);
        printf("\n");
    }

    // Define and open an int type file descriptor in write mode
    int fd = open("person.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    // Check if the file descriptor is open or not
    if (fd == -1) {
        perror("Error opening file.");
        exit(EXIT_FAILURE);
    }

    // Write the person information into the file
    for (int i = 0; i < persons_num; i++) {
        write_person_to_file(fd, &persons[i], i + 1);
    }

    // Close the file pointer
    if (close(fd) == -1) {
        perror("Failed to close file pointer");
        exit(EXIT_FAILURE);
    }

    printf("Data written to file successfully.\n");

    // Free allocated memory
    for (int i = 0; i < persons_num; i++) {
        free(persons[i].address);
    }
    free(persons);

    return 0;
}

// Function to get information about a person
void get_info(struct PERSON *person) {
    get_first_name(person);
    get_last_name(person);
    get_age(person);
    get_job_status(person);
    get_salary(person);
    get_street(person->address);
    get_city(person->address);
    get_division(person->address);
    get_zip_code(person->address);
}

void get_first_name(struct PERSON *person) {
    printf("Enter First Name: ");
    fgets(person->first_name, sizeof(person->first_name), stdin);
    // Remove trailing newline characters if any
    person->first_name[strcspn(person->first_name, "\n")] = '\0';
}

void get_last_name(struct PERSON *person) {
    printf("Enter Last Name: ");
    fgets(person->last_name, sizeof(person->last_name), stdin);
    // Remove trailing newline characters if any
    person->last_name[strcspn(person->last_name, "\n")] = '\0';
}

void get_age(struct PERSON *person) {
    do {
        printf("Enter Age: ");
        fscanf(stdin, "%d", &person->age);
        getchar(); // Consume newline character left by fscanf
    } while (!validate_age(person->age));
}

void get_job_status(struct PERSON *person) {
    printf("Enter Job Status: ");
    fgets(person->job_status, sizeof(person->job_status), stdin);
    // Remove trailing newline characters if any
    person->job_status[strcspn(person->job_status, "\n")] = '\0';
}

void get_salary(struct PERSON *person) {
    do {
        printf("Enter Salary: ");
        fscanf(stdin, "%f", &person->salary);
        getchar(); // Consume newline character left by fscanf
    } while (!validate_salary(person->salary));
}

void get_street(struct ADDRESS *address) {
    printf("Enter Street: ");
    fgets(address->street, sizeof(address->street), stdin);
    // Remove trailing newline characters if any
    address->street[strcspn(address->street, "\n")] = '\0';
}

void get_city(struct ADDRESS *address) {
    printf("Enter City: ");
    fgets(address->city, sizeof(address->city), stdin);
    // Remove trailing newline characters if any
    address->city[strcspn(address->city, "\n")] = '\0';
}

void get_division(struct ADDRESS *address) {
    printf("Enter Division: ");
    fgets(address->division, sizeof(address->division), stdin);
    // Remove trailing newline characters if any
    address->division[strcspn(address->division, "\n")] = '\0';
}

void get_zip_code(struct ADDRESS *address) {
    do {
        printf("Enter Zip Code: ");
        fscanf(stdin, "%d", &address->zip_code);
        getchar(); // Consume newline character left by fscanf
    } while (!validate_zip_code(address->zip_code));
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

// Function to write a person's details to a file
void write_person_to_file(int fd, const struct PERSON *person, int index) {
    char buffer[512];
    int length = snprintf(buffer, sizeof(buffer), "Details about person[%d]\nFirst Name: %s\nLast Name: %s\nAge: %d\nJob Status: %s\nSalary: %.2f\nStreet: %s\nCity: %s\nDivision: %s\nZip Code: %d\n\n",
            index, person->first_name, person->last_name, person->age, person->job_status, person->salary,
            person->address->street, person->address->city, person->address->division, person->address->zip_code);

    ssize_t write_status = write(fd, buffer, length);
    check_w_status(write_status);
}

// Function to validate age
int validate_age(int age) {
    if (age <= 0 || age > 150) {
        printf("Invalid age. Must be between 1 and 150.\n");
        return 0;
    }
    return 1;
}

// Function to validate salary
int validate_salary(float salary) {
    if (salary < 0) {
        printf("Invalid salary. Enter a non-negative number.\n");
        return 0;
    }
    return 1;
}

// Function to validate zip code
int validate_zip_code(int zip_code) {
    if (zip_code <= 0) {
        printf("Invalid zip code. Please enter a positive number.\n");
        return 0;
    }
    return 1;
}

// Function to check writing error status
void check_w_status(ssize_t write_status) {
    if (write_status == -1) {
        perror("Error writing to file");
    }
}