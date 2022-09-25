#include<stdio.h>

int hcf(int,int,int,int);

int main()
{
    int n1,n2,h,x1,x2;
    scanf("%d%d",&n1,&n2);
    x1=n1;
    x2=n2;
    h=hcf(n1,n2,x1,x2);
    printf("HCF of the numbers is %d",h);
    return 0;
}

int hcf(int n1,int n2,int x1,int x2)
{



    if(x2%n1==0&&x1%n1==0)
        return n1;


        hcf(n1-1,n2,x1,x2);

}
