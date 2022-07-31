//Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>

int sum_e(int );
int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("sum of first %d even natural number is %d",n,sum_e(n));
    return 0;
}
int sum_e(int n)
{
    if(n==1)
        return 2;
    else
        return(sum_e(n-1)+2*n);
}
