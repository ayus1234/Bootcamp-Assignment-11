//Function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>

int HCF(int,int);

int main()
{
    int N1,N2;
    printf("Enter two numbers\n");
    scanf("%d %d",&N1,&N2);
    printf("HCF of %d and %d is %d",N1,N2,HCF(N1,N2));
    return 0;
}

int HCF(int num1,int num2)
{
    int i;
    for(i=num1<num2?num1:num2;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
           break;
    }
    return i;
}