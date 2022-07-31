//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>

int sum_o(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("sum of first %d odd natural number is %d",n,sum_o(n));
    return 0;
}
int sum_o(int n)
{
    if(n==1)
        return 1;
    else
        return(sum_o(n-1)+2*n-1);
}
