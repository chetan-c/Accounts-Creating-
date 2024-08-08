//create your Google account

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    char gender[30];
    char username[30];
    int age, date, year, month, Password, number;
};

int main() {

    struct Person person1;

    printf(" -:****** \033[1;32m Create Your Google Account \033[0m \n *****:- ");

    printf("\nEnter name: ");
    scanf("%s", person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);

    printf("Enter any 4 digit number you like:\n");
    scanf("%d", &person1.number);

    printf("Enter your gender (Male Or Female):\n");
    scanf("%s", person1.gender);

    printf("Enter your date of birth (Date Month Year):\n");
    printf("Date (1-31): ");
    scanf("%d", &person1.date);
    printf("Month (1-12): ");
    scanf("%d", &person1.month);
    printf("Year: ");
    scanf("%d", &person1.year);

    printf("Enter the Password (only 5 digit numbers are allowed):\n");
    scanf("%d", &person1.Password);

    printf("\n**\n");




    printf("\nPerson Information:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Date of birth: %d/%d/%d\n", person1.date, person1.month, person1.year);
    printf("Gender: %s\n", person1.gender);


    system("cls");



    printf("\n**\n");
    printf("033[1;32m Congratulations!\033[0m\nYour email account has been created successfully.\n");
    sprintf(person1.username, "%s%d@gmail.com", person1.name, person1.number);
    printf("Email: %s\n", person1.username);
    printf("Password: %d\n", person1.Password);

    printf("\n------->\033[1;32m Welcome To Login page \033[0m<------\n");

    char username[30];
    int password;

    printf("Enter Email: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%d", &password);

    if (strcmp(username, person1.username) == 0 && password == person1.Password) {
        printf("\033[1;34m,\033[1mWelcome!\033[0m\n");
    } else {
        printf("\n \033[1;31m Your password or username is wrong.\nPlease type correctly and try again.\n");
    }

}
