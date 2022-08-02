//Function to print first N terms of Fibonacci series. (TSRN)

#include<stdio.h>

void fibonacci(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    fibonacci(N);
    return 0;
}

void fibonacci(int num)
{
    int i,term1=-1,term2=1,term3;
    for(i=1;i<=num;i++)
    {
        term3=term1+term2;
        term1=term2;
        term2=term3;
        printf("%d ",term3);
    }
}