//Write a recursive function to calculate factorial of a given number
#include<stdio.h>

int fact(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else if(n>0)
        return(fact(n-1)*n);
}
