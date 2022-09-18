#include<stdio.h>
#include<stdlib.h>

/**
 * main - asks for various inofrmation of the user
 *
 * @fname: first name of the user
 * @lname: Last name of the user
 * @age: age of the user
 * @city: City of the user
 * @nation: nationality of the user
 *
 * Return: 0 on success
 */

int main()
{
        int age;
        char fname [20];
        char lname [20];
        char cityf [20];
        char cityl [20];
        char nation [20];

        printf("What is your first name? \n");
        scanf("%s", fname);
        printf("What is your last name? \n");
        scanf("%s", lname);
        printf("How old are you? \n");
        scanf("%d", &age);
        printf("Where do you live? \n");
        scanf("%s %s", cityf, cityl);
        printf("What is your nationality? \n");
        scanf("%s", nation);

        printf("\n");
        printf("Your full name is %s %s,\n", fname, lname);
        printf("You are %d years old.\n", age);
        printf("Currently you live in %s %s city,\n", cityf, cityl);
        printf("and you are a/an %s citizen.\n", nation);

        return (0);
}
