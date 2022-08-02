//Function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>

int prime(int);

int main()
{
    int N;
    printf("Enter the number\n");
    scanf("%d",&N);
    printf("%d",prime(N));
    return 0;
}

int prime(int num)
{
    int i;
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
           break;
    }
    if(num==i)
       return 1;
    else
       return 0;
}