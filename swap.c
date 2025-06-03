/*Develop a C program to swap two numbers using Pointer.
*/
#include <stdio.h>
int main ()
{
    int a,b,temp;
    int *ptr1,*ptr2;
    printf("enter values of a,b:\n");
    scanf("%d%d",&a,&b);
    printf("numbers before swapping are %d,%d\n",a,b);
    ptr1=&a;
    ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("numbers after swapping are %d,%d\n",a,b);
    return 0;

}