
#include<stdio.h>

int power(int x,int y)
{
    int i,p=1;
    for(i=0;i<y;i++)
    {
        p*=x;
    }
    return p;
}

void armstrong(int n)
{
    int i,rem,p,ans=0,old=n,temp=n;
    for(i=0;n>0;i++,n/=10);
    while(temp>0)
    {
        rem=temp%10;
        ans=ans+power(rem,i);;
        temp/=10;

    }
    if(ans==old)
    {
        printf("number is arm strong: %d",old);
    }
    else
    {
        printf("number is not arm strong");
    }
}

int main()
{
    int x;
    printf("Enter number to find Armstrong number: ");
    scanf("%d",&x);
    armstrong(x);
    return 0;
}

