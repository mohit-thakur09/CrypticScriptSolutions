
#include<stdio.h>
#include<string.h>

int main(){
    char str[5][20];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter String %d: ",i+1);
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        puts(str[i]);
    }
    return 0;
}


