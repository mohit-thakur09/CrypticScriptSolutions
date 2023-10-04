#include<stdio.h>
int main()
{
    int i, amt;
    int note[]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("Enter Amount:  ");
    scanf("%d",&amt);
    for(i = 0; i < 9; i++)
    {
        count[i] = amt/note[i];
        amt = amt % note[i];
        printf(" %d : %d \n", note[i], count[i]);
    }
    return 0;
}
