#include<stdio.h>
int powNum(int,int);
int main()
{
    int n,p,res;
    scanf("%d%d",&n,&p);
    res=powNum(n,p);
    printf("%d",res);
    return 0;
}

int powNum(int n,int p)
{
    if(p!=0)
    {

    return n*powNum(n,p-1);

    }
else return 1;

}
