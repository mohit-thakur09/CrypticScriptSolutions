#include<stdio.h>
int main()
{
    char arr[20];
    char str[10];
    int i,count=0;
    char ch;
    printf("Enter string: ");
    gets(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        ch=arr[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                str[count]=ch;
                count++;
            }
    }
    str[count]='\0';
    if(!count)
        printf("No vowel found");
    else
    {
        i=0;
        while(str[i]!='\0')
        {
            printf("%c\n",str[i]);
            i++;
        }

        printf("%d vowel Found\n",count);
    }
    return 0;
}
