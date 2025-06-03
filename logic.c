/*Implement logical operations in C programs and display
the results.*/

#include <stdio.h>
int main()
{
{
    int a=5,b=10;
    if(a>0 && b>0)
    {
        printf("%d and %d are positive integers\n",a,b);
    }
    else{
        printf("one of both numbers are non positive integer\n");
    }
}
  
int a=-5,b=-10;
    if (a>0||b>0)
    {
        printf("either one or both of numbers are positive integer\n");
    }
    else{
        printf("niether number is positive integer\n",a,b);
    }
    return 0;
}
