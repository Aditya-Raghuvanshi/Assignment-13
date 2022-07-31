//Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>

int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    printf("no. of digits in %d is %d ",n,count(n));
    return 0;

}
int count(int n)
{
    if(n==0)
        return(0);
    else
        return(count(n/10)+1);
}
