#include <stdio.h>
#include <stdlib.h>

struct ADDRESS {
    char street[50];
    char city[50];
    int zip_code;
};

struct Person {
    char name[50];
    int age;
    char job_status[50];
    float salary;
    struct ADDRESS address;
};

int main(void){
    int i, j;
    // define and initialize strict person array
    struct Person person[2];

    for(i = 0; i < 2; i++){
        printf("Enter info about person[%d]\n", i + 1);
        printf("Enter Name: ");
        fgets(person[i].name, sizeof(person[i].name), stdin);
        printf("Enter Age: ");
        scanf("%d", &person[i].age);
        getchar(); // To consume the newline character left by previous scanf
        printf("Enter Job Status: ");
        fgets(person[i].job_status, sizeof(person[i].job_status), stdin);
        printf("Enter Salary: ");
        scanf("%f", &person[i].salary);
        getchar(); // To consume the newline character left by previous scanf
        printf("\nEnter address of person[%d]\n", i + 1);
        printf("Enter Street: ");
        fgets(person[i].address.street, sizeof(person[i].address.street), stdin);
        printf("Enter City: ");
        fgets(person[i].address.city, sizeof(person[i].address.city), stdin);
        printf("Enter Zip code: ");
        scanf("%d", &person[i].address.zip_code);
        getchar(); // To consume the newline character left by previous scanf
        system("cls || clear");
    }
    

    for(i = 0; i < 2; i++){
        printf("Details about person[%d]\n", i + 1);
        printf("Name:%s\n", person[i].name);
        printf("Age:%d\n", person[i].age);
        printf("Job Status:%s\n", person[i].job_status);
        printf("Salary:%.2f\n", person[i].salary);
        printf("Street:%s\n", person[i].address.street);
        printf("City:%s\n", person[i].address.city);
        printf("Zip code:%d\n", person[i].address.zip_code);
        printf("\n");
    }

    return 0;
}