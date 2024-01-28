#include <stdio.h>
void main()
{
    int age, weight;
    printf("\n\n#---- Welcome to Blood Donation Champ ----#\n\n");
    printf("Enter Donor age : ");
    scanf("%d", &age);
    if (age >= 18 && age <= 55)
    {
        printf("Enter Donor weight : ");
        scanf("%d", &weight);
        if (weight >= 45)
        {
            printf("\nYes, you fullfill all the condition\n\nYou can Donate Blood---->\n\n");
        }
        else
        {
            printf("\nSorry! Your weight is low.\n");
        }
    }
    else
    {
        if (age < 18)
        {
            printf("\nSorry! You are too smaller for donating Blood.\n");
        }
        else
        {
            printf("\nSorry! You are age is above 55.\n");
        }
    }
}