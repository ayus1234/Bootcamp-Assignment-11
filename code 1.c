//Function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

int LCM(int,int);

int main()
{
    int N1,N2;
    printf("Enter two numbers\n");
    scanf("%d %d",&N1,&N2);
    printf("LCM of %d and %d is %d",N1,N2,LCM(N1,N2));
    return 0;
}

int LCM(int num1,int num2)
{
    int i;
    for(i=num1>num2?num1:num2;i<=num1*num2;i+=num1>num2?num1:num2)
    {
        if(i%num1==0 && i%num2==0)
           break;
    }
    return i;
}