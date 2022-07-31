//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int HCF(int, int);
int main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d",a,b,HCF(a,b));
    return 0;
}
int HCF(int a,int b)
{
    if(a%b==0)
        return(b);
    if(b%a==0)
        return(a);
    if(a>b)
       return(HCF(a%b,b));
    if(a<b)
       return(HCF(a,b%a));
}
