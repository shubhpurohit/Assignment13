#include<stdio.h>
int printFib(int,int,int);

int main()
{
    int n,a=-1,b=1;
    scanf("%d",&n);
    printFib(n,a,b);
    return 0;

}
int printFib(int n,int a,int b)
{
    int c;
    if(n==0)
        return 0;

    c=a+b;
    a=b;
    b=c;
    printf("%d ",c);
    printFib(n-1,a,b);





}
