//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>

int main()
{
    int n,i;
    printf("enter the term up to which you want the series ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}
int fib(int n)
{
   if(n==0)
        return 0;
   else if(n==1)
        return 1;
   else
       return(fib(n-1)+fib(n-2));
}
