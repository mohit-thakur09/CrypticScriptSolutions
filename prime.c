
#include<stdio.h>

void prime(int n)
{
    int i=2,count=0;
    while(i<n)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
        i++;
    }
    if(!count)
    {
        printf("%d is prime Number",n);
    }
    else
    {
        printf("%d is not prime Number",n);
    }

}

int main()
{
    int x;
    printf("Enter number to find prime number: ");
    scanf("%d",&x);
    prime(x);
    return 0;
}
