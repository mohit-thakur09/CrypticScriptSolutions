
#include<stdio.h>
#include<string.h>

void reverse(char arr[])
{
    int i,j=0;
    char rev[20];
    for(i=strlen(arr)-1;i>=0;i--,j++)
    {
        rev[j]=arr[i];
    }
    rev[j]='\0';
    puts(rev);
}

int main()
{
    char a[20];
    printf("Enter string: ");
    gets(a);
    reverse(a);
    return 0;
}

