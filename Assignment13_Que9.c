#include<stdio.h>
int countDigi(int,int);

int main()
{
    int n,x,count=0;
    scanf("%d",&n);
    x=countDigi(n,count);
    printf("%d",x);
    return 0;
}

int countDigi(int n,int count)
{
    if(n!=0)
        {
         countDigi(n/10,count+1);
        }
        else
            return count;

}
