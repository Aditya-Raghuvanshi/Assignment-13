//Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>

int pow(int, int);
int main()
{
    int m,n;  //m power n
    printf("enter the number and power which you want to calculate ");
    scanf("%d%d",&m,&n);
    printf("%d power %d is equal to %d",m,n,pow(m,n));
    return 0;

}
int pow(int m,int n)
{
    if(n==0)
        return(1);
    else
        return(pow(m,n-1)*m);

}
