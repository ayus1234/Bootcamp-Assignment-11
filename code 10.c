//Program to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the function.

#include<stdio.h>

int factorial(int);

int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum=sum+factorial(i)/i;
    }
    printf("Sum of the Series is %d",sum);
    return 0;
}

int factorial(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
        fact=fact*i;
    return fact;
}