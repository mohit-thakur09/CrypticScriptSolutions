#include<stdio.h>

int main()
{
    FILE *fp;
    int i;
    char msg[20],ch;

    fp = fopen("D:\\1 - C lang ex\\file_handling 20\\file_ex\\data1.txt","w");
    if(fp==NULL)
    {
        printf("Sorry!, File is NOT saved!");
        return 1;
    }
    printf("Enter Message to Stored in File: ");
    gets(msg);
    for(i=0;msg[i]!='\0';i++)
    {
        ch=msg[i];
        fputc(ch,fp);
    }
    fclose(fp);
    printf("File saved successfully");
    return 0;
}
