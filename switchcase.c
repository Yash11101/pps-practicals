/*Write a C program to implement control flow
statements i.e. switch case.
*/
#include<stdio.h>
int main()
{
    int day;
    printf("enter a number");
    scanf("%d",&day);
    printf("the day with number %d is ",day);
    switch(day)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thursday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("invalid input");
        break;
    }
    return 0;
}