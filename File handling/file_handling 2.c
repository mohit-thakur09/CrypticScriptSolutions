#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp= fopen("D:\\1 - C lang ex\\file_handling 20\\file_ex\\data1.txt","r");
    if(fp==NULL)
    {
        printf("Sorry! your file can not be opened");
        return 1;
    }
    printf("File Contents Are...\n\n");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);

    }
    fclose(fp);
    printf("\n\n File Read successfully!");
    return 0;
}
