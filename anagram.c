#include<stdio.h>
#include<string.h>
int main()
{
    char arr[10],brr[20];
    int l1,l2,i,j,temp;
    printf("enter your string: ");
    gets(arr);
    printf("enter your string: ");
    gets(brr);
    l1=strlen(arr);
    l2=strlen(brr);
    if(l1!=l2)
        printf("not anagram...");
    else{
        for(i=0;i<l1-1;i++)
        {
            for(j=i+1;j<l1;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(i=0;i<l2-1;i++)
        {
            for(j=i+1;j<l2;j++)
            {
                if(brr[i]>brr[j])
                {
                    temp=brr[i];
                    brr[i]=brr[j];
                    brr[j]=temp;
                }
            }
        }
        if(strcmp(arr,brr)==0)
            printf("anagram.");
        else
            printf("not anagram.");

    }
    return 0;
}
