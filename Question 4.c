//Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>

int sum(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("sum of square of first %d natural number is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    if(n==1)
        return 1;
    else
        return(sum(n-1)+n*n);
}
