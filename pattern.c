#include<stdio.h>

int main()
{
    int r,i,j;

    printf("enter the no. of rows: ");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<4+i;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
