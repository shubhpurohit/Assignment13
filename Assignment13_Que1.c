#include<stdio.h>
int sumOfNNum(int n);
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=sumOfNNum(n);
    printf("%d",sum);
    return 0;
}

int sumOfNNum(int n)
{

    if(n==1)
        return 1;

    return n+sumOfNNum(n-1);

}
