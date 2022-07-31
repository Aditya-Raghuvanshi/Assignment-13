//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>

int sum_digit(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("sum of all digits of %d is %d",n,sum_digit(n));
    return 0;
}
int sum_digit(int n)
{
    if(n==0)
        return 0;
    else
        return(sum_digit(n/10)+n%10);
}
