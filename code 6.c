//Function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>

void printPrime(int,int);

int main()
{
    int N1,N2;
    printf("Enter two numbers\n");
    scanf("%d %d",&N1,&N2);
    printPrime(N1,N2);
    return 0;
}

void printPrime(int num1,int num2)
{
    int i,j;
    for(i=num1+1;i<=num2-1;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
               break;
        }
        if(i==j)
           printf("%d ",i);
    }
}