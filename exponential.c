#include<stdio.h>
int main()
{
    int i,num1,num2,num=1;
    printf("Enter Base: ");
    scanf("%d",&num1);
    printf("Enter Exponent: ");
    scanf("%d",&num2);
    for(i=1;i<=num2;i++)
    {
        num*=num1;
    }
    printf("Answer= %d\n\n",num);
    return 0;
}
