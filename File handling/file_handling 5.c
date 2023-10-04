#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char arr[80];
    char choice;

    fp=fopen("D:\\1 - C lang ex\\file_handling 20\\file_ex\\data3.txt","w+");
    if(fp==NULL)
    {
        printf("File Not Opened");
        return 1;
    }
    printf("Enter the Message to saved in file: ");
    while(1)
    {
        gets(arr);
        if(strlen(arr)==0)
            break;
        fputs(arr,fp);
        fputs("\n",fp);
    }
    printf("\n File saved successfully! \n\n Press 'r' to read file \n\n Any key to Exit: ");
    scanf("%c",&choice);

    if(choice=='r')
    {
        rewind(fp);
        while(fgets(arr,50,fp)!=NULL)
        {
            printf("%s",arr);
        }
    }
    else
    {
        printf("\n You don't want Read File");
    }
    printf("\n\n Thank you");
    fclose(fp);
    return 0;
}
