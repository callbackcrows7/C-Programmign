#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Functions prototypes
struct PERSON* allocate_memory_for_person();
void free_memory_for_person(struct PERSON *person);
void get_info(struct PERSON *person);
void print_person_details(struct PERSON *person);
int validate_age(int age);
int validate_salary(float salary);
int validate_zip_code(int zip_code);

// Define a ADDRESS structure
struct ADDRESS{
    char *street;
    char *city;
    int zip_code;
};

// Define a PERSON structure
struct PERSON{
    char *name;
    int age;
    char *job_status;
    float salary;
    struct ADDRESS address; // Nested structure
};

int main(void) {

   struct PERSON *person = allocate_memory_for_person();
    if (person == NULL) {
        return 1; // Exit with an error code
    }

    // Collect information about the person
    printf("Enter information about the person\n");
    get_info(person);
    system("cls || clear"); // Clear console.

    // Display information about the person
    printf("Details about the person\n");
    print_person_details(person);

    // Free allocated memory
    free_memory_for_person(person);

    return 0;
}

// Function to allocate memory for a person
struct PERSON* allocate_memory_for_person() {
    struct PERSON *person = (struct PERSON *)malloc(sizeof(struct PERSON));
    if (person == NULL) {
        fprintf(stderr, "Memory allocation for person structure failed.\n");
        return NULL;
    }

    person->name = (char *)malloc(100 * sizeof(char));
    person->job_status = (char *)malloc(100 * sizeof(char));
    person->address.street = (char *)malloc(100 * sizeof(char));
    person->address.city = (char *)malloc(100 * sizeof(char));

    if (!person->name || !person->job_status || !person->address.street || !person->address.city) {
        fprintf(stderr, "Memory allocation for strings failed.\n");
        free_memory_for_person(person);
        return NULL;
    }

    return person;
}

// Function to free memory allocated for a person
void free_memory_for_person(struct PERSON *person) {
    if (person != NULL) {
        free(person->name);
        free(person->job_status);
        free(person->address.street);
        free(person->address.city);
        free(person);
    }
}

// Function to get information about a person
void get_info(struct PERSON *person){
    // Collect Name
    printf("Enter Name: ");
    fgets(person->name, sizeof(person->name), stdin);
    // Remove trailing newline characters if any
    person->name[strcspn(person->name, "\n")] = '\0';

    // Collect age with validation
    do
    {
        printf("Enter Age: ");
        scanf("%d", &person->age);
        while (getchar() != '\n'); // Clear the input buffer
        getchar(); // To consume the newline character left by previous scanf
    } while (!validate_age(person->age));
    
    // Collect Job status
    printf("Enter Job Status: ");
    fgets(person->job_status, sizeof(person->job_status), stdin);
    // Remove trailing newline character if any
    person->job_status[strcspn(person->job_status, "\n")] = '\0';

    // Collect salary with validation
    do
    {
        printf("Enter Salary: ");
        scanf("%f", &person->salary);
        while (getchar() != '\n'); // Clear the input buffer
        getchar(); // To consume the newline character left by previous scanf
    } while (!validate_salary(person->salary));

    // Collect street
    printf("Enter Street: ");
    fgets(person->address.street, sizeof(person->address.street), stdin);
    // Remove trailing newline character if any
    person->address.street[strcspn(person->address.street, "\n")] = '\0';

    // Collect city
    printf("Enter City: ");
    fgets(person->address.city, sizeof(person->address.city), stdin);
    // Remove trailing newline character if any
    person->address.city[strcspn(person->address.city, "\n")] = '\0';

    // Collect zip code with validation
    do
    {
        printf("Enter Zip ode; ");
        scanf("%d", &person->address.zip_code);
        while (getchar() != '\n'); // Clear the input buffer
        getchar(); // To consume the newline character left by previous scanf
    } while (!validate_zip_code(person->address.zip_code));
    
    
}

// Function to display a person's details
void print_person_details(struct PERSON *person){
    printf("Name: %s\n", person->name);
    printf("Age: %d\n", person->age);
    printf("Job status: %s\n", person->job_status);
    printf("Salary: %.2f\n", person->salary);
    printf("Street: %s\n", person->address.street);
    printf("City: %s\n", person->address.city);
    printf("Zip code: %d\n", person->address.zip_code);
}

// Function to validate age
int validate_age(int age){
    if (age <= 0 || age >= 121){
        printf("Invalid age. Please enter a valid age between 0 and 121.\n");
        return 0; // Exit with an error code
    }
    return 1;
}

// Function to validate salary
int validate_salary(float salary){
    if (salary < 0){
        printf("Invalid salary. Please enter a non-negative number.\n");
        return 0; // Exit with an error code
    }
    return 1;
}

// Function to validate zip code
int validate_zip_code(int zip_code){
    if (zip_code < 0){
        printf("Invalid zip code. Please enter a non-negative number.\n");
        return 0; // Exit with an error code
    }
    return 1;
}