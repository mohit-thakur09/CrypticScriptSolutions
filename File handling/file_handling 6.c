#include<stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char arr1[100];
    char arr2[100];
    char str[50];

    printf("Enter the 1st file name to open: ");
    gets(arr1);
    printf("Enter the 2nd file name to copy: ");
    gets(arr2);

    fp1 = fopen(arr1,"r");
    if(fp1==NULL)
    {
        printf("sorry! file 1 not open");
        return 1;
    }
    fp2 = fopen(arr2,"w+");
    if(fp2==NULL)
    {
        printf("sorry! file 2 cannot create");
        return 1;
    }
    while(fgets(str,50,fp1)!=NULL)
    {
        fputs(str,fp2);
        printf("%s",str);
    }
    fclose(fp1);
    fclose(fp2);
    printf("\n\nDone all works");
    return 0;

}
