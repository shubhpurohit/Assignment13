#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
    return 0;
}

int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
}
