#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char arr[80];

    fp=fopen("D:\\1 - C lang ex\\file_handling 20\\file_ex\\data2.txt","w");
    if(fp==NULL)
    {
        printf("file cannot be opened");
        return 1;
    }
    printf("Enter the text to saved in file: ");
    while(1)
    {
        gets(arr);
        if(strlen(arr)==0)
            break;
        fputs(arr,fp);
        fputs("\n",fp);
    }
    printf("file saved successfully!");
    fclose(fp);
    return 0;
}
