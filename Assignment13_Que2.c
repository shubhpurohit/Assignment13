#include<stdio.h>
int sumOfNOdd(int);
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=sumOfNOdd(2*n);
    printf("%d",sum);
    return 0;
}

int sumOfNOdd(int n)
{
    if(n==1)
        return 1;
    else if(n%2!=0)
        return n+sumOfNOdd(n-1);
    else
        sumOfNOdd(n-1);
}
