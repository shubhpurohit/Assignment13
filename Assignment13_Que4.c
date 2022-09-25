#include<stdio.h>
int sumOfSquare(int);
int main()
{
    int n,sqrSum;
    scanf("%d",&n);
    sqrSum=sumOfSquare(n);
    printf("%d",sqrSum);
    return 0;
}

int sumOfSquare(int n)
{   int sum=0,x;
    if(n==1)
        return 1;

      x=n*n;
     sum=x+sumOfSquare(n-1);

     return sum;
}
