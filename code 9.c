//Program to find the square of any number using the function.

#include<stdio.h>

int square(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Square of %d is %d",N,square(N));
    return 0;
}

int square(int num)
{
    return num*num;
}