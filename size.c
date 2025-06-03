/*Write a C program to declare and initialize variables of
different data types and display their sizes.
*/
#include<stdio.h>
int main()
{
    short a;
    long b;
    long long c;
    long double d;

    printf("size of a = %d bytes\n",sizeof(a));
    printf("size of b = %d bytes\n",sizeof(b));
    printf("size of c = %d bytes\n",sizeof(c));
    printf("size of d = %d bytes\n",sizeof(d));
    return 0;
}