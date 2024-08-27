#include <stdio.h>

// Define the Address structure
struct ADDRESS{
    char street[50];
    char city[50];
    int zip_code; 
};

// Define the person structure
struct person{
    char name[25];
    int age;
    float salary;
    struct ADDRESS address; // nested structure
};



int main(void){
    // Declare and initialize a person
    struct person person1;

    // Set the person's name age and salary
    printf("Enter person's name: ");
    fgets(person1.name, sizeof(person1.name), stdin);
    printf("Enter person's age: ");
    scanf("%d", &person1.age);
    printf("Enter person's salary: ");
    scanf("%f", &person1.salary);

    // Set the person's address
    printf("Enter person's street: ");
    getchar(); // To consume the newline character left by previous scanf
    fgets(person1.address.street, sizeof(person1.address.street), stdin);
    printf("Enter person's city: ");
    fgets(person1.address.city, sizeof(person1.address), stdin);
    printf("Enter person's zip code: ");
    scanf("%d", &person1.address.zip_code);

    // Print the person's details
    printf("\nPerson Details:\n");
    printf("Person Name: %s\n", person1.name);
    printf("Person Age: %d\n", person1.age);
    printf("Person Salary: %.2f\n", person1.salary);
    printf("Address:\n");
    printf("Person Street: %s\n", person1.address.street);
    printf("Person City: %s\n", person1.address.city);
    printf("Person Zip Code: %d\n", person1.address.zip_code);

    return 0;
}