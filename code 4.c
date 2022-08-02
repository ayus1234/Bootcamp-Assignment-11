//Function to find the next prime number of a given number. (TSRS)

#include<stdio.h>

int nextPrime(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("Next Prime Number of %d is %d",N,nextPrime(N));
    return 0;
}

int nextPrime(int num)
{
    int i,j;
    for(i=num+1;i<=100;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
               break;
        }
        if(i==j)
           return i;
    }
}