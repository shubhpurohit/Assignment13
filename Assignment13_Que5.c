#include<stdio.h>
int sumOfIndiBits(int);
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=sumOfIndiBits(n);
    printf("%d",sum);
    return 0;
}

int sumOfIndiBits(int n)
{int x;
    if(n>=1&&n<=9)
        return n;

    x=n%10;
    return x+sumOfIndiBits(n/10);


}
