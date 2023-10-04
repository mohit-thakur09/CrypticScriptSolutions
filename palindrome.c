
#include<stdio.h>

void palindrome(int n)
{
    int old=n,rem,ans=0;

    while(n>0)
    {
        rem=n%10;
        ans=rem+(ans*10);
        n/=10;
    }
    if(old==ans)
    {
        printf("number is palindrome: %d",old);
    }
    else
    {
        printf("%d not palindrome",old);
    }
}

int main()
{
    int x;
    printf("Enter number to find prime number: ");
    scanf("%d",&x);
    palindrome(x);
    return 0;
}

