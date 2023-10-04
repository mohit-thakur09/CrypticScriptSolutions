#include<stdio.h>

int main()
{
    char arr[40];
    int i;
    printf("enter full name: ");
    scanf("%[^\n]s",arr);
    printf("hi ");
    for(i=0;arr[i];i++)
    {
        printf("%c",arr[i]);
        if(arr[i]==' ' && arr[i+1]!=' ')
            printf("\nhello ");
    }
    return 0;
}
