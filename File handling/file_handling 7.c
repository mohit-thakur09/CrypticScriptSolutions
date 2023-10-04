#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    float per;
};

int main()
{
    FILE *fp;
    struct student s;
    char str[20];
    char choice='y';

    fp = fopen("D:\\1 - C lang ex\\file_handling 20\\file_ex\\data7.txt","w+");
    if(fp==NULL)
    {
        printf("Sorry! File not open");
        return 1;
    }
    while(choice=='y'||choice=='Y')
    {
        printf("Enter roll, name and per: ");
        fscanf(stdin,"%d %s %f",&s.roll,s.name,&s.per);
        fprintf(fp,"%d %s %f \n",s.roll,s.name,s.per);

        fflush(stdin);
        printf("\n Do you want to save more info(y/n): ");
        scanf("%c",&choice);
    }
    printf("\n Saved successfully!\n Press R to read file data\n");

    _getch();

    rewind(fp);
    while(fgets(str,20,fp)!=NULL)
    {
        printf("%s",str);
    }
    printf("\nread file done");
    fclose(fp);
    return 0;

}
