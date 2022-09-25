#include<stdio.h>
int sumOfNEven(int);
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=sumOfNEven(2*n);
    printf("%d",sum);
    return 0;
}

int sumOfNEven(int n)
{
    if(n==0)
        return 0;
    else if(n%2==0)
        return n+sumOfNEven(n-1);
    else
        sumOfNEven(n-1);
}
