//Function to print PASCAL Triangle. (TSRN)

#include<stdio.h>

int factorial(int);
int combination(int,int);
void pascal(int);

int main()
{
    int L;
    printf("Enter the number of lines\n");
    scanf("%d",&L);
    pascal(L);
    return 0;
}

int factorial(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
        fact=fact*i;
    return fact;
}

int combination(int n,int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

void pascal(int lines)
{
    int i,j,k,r;
    for(i=1;i<=lines;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*lines+1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i && k)
            {
                printf("%d",combination(i-1,r));
                r++;
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}