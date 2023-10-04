#include<stdio.h>
int main()
{
    FILE *fp;
    char arr[50];

    fp = fopen("D:\\1 - C lang ex\\file_handling 20\\file_ex\\data2.txt","r");
    if(fp==NULL)
    {
        printf("file cannot be open");
        return 1;
    }
    while(fgets(arr,50,fp)!=NULL)
    {
        printf("%s",arr);
    }
    printf("\n\nFile read successfully");
    fclose(fp);
    return 0;
}
