#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Header comment
/*
 * This program collects and displays information about two person.
 * It includes details such as name, age, job status, salary, and address.
 * The program is designed with modular input/output functions and validations.
 */

// Define the ADDRESS Structure
struct ADDRESS{
    char street[50];
    char city[50];
    int zip_code;
};

// Define the PERSON structure
struct PERSON{
    char name[50];
    int age;
    char job_status[50];
    float salary;
    struct ADDRESS address;
};

// Function prototypes
void get_info(struct PERSON *person);
void print_person_details(struct PERSON *person);
int validate_age(int age);
int validate_salary(float salary);
int validate_zip_code(int zip_code);

int main(void){
    struct PERSON person[2];

    // Collect information for each person
    for(int i = 0; i < 2; i++){
        printf("Enter info about person[%d]\n", i + 1);
        get_info(&person[i]);
        system("cls || clear"); // Clear console
    }

    // Display information about each person
    for(int i = 0; i < 2; i++){
        printf("Details about person[%d]\n", i + 1);
        print_person_details(&person[i]);
        printf("\n");
    }

    return 0;
}

// Function to get information about a person.
void get_info(struct PERSON* person){
    // Collect Name
    printf("Enter Name: ");
    fgets(person->name, sizeof(person->name), stdin);
    // Remove trailing newline character if any
    person->name[strcspn(person->name, "\n")] = '\0';

    // Collect age with validation
    do{
        printf("Enter age: ");
        scanf("%d", &person->age);
        getchar(); // To consume the newline character left by previous scanf
    } while(!validate_age(person->age));

    // Collect job status
    printf("Enter job status: ");
    fgets(person->job_status, sizeof(person->job_status), stdin);
    // Remove trailing newline character if any
    person->job_status[strcspn(person->job_status, "\n")] = '\0';

    // Collect salary with validation
    do{
        printf("Enter salary: ");
        scanf("%f", &person->salary);
        getchar(); // To consume the newline character left by previous scanf
    }while(!validate_salary(person->salary));

    // Collect street
    printf("Enter street: ");
    fgets(person->address.street, sizeof(person->address.street), stdin);
    // Remove trailing newline character if any
    person->address.street[strcspn(person->address.street, "\n")] = '\0';

    // Collect city
    printf("Enter city: ");
    fgets(person->address.city, sizeof(person->address.city), stdin);
    // Remove trailing newline character if any
    person->address.city[strcspn(person->address.city, "\n")] = '\0';

    // Collect zip code with validation
    do{
        printf("Enter zip code: ");
        scanf("%d", &person->address.zip_code);
        getchar(); // To consume the newline character left by previous scanf
    }while(!validate_zip_code(person->address.zip_code));
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

// Function to validate age.
int validate_age(int age){
    if(age <= 0 || age >= 121){
        printf("Invalid age. Please enter a valid age between 1 and 120\n");
        return 0;
    }
    return 1;
}

// Function to validate salary.
int validate_salary(float salary){
    if(salary < 0){
        printf("Invalid salary. Please enter a non-negative number.\n");
        return 0;
    }
    return 1;
}

// Function to validate zip code
int validate_zip_code(int zip_code){
    if(zip_code <= 0){
        printf("Invalid zip code. Please enter a non-negative number.\n");
        return 0;
    }
    return 1;
}