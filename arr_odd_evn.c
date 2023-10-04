#include<stdio.h>
int main()
{
    int arr[10];
    int i,n,odd=0,evn=0;

    printf("how many no. you want to add: ");
    scanf("%d",&n);
    printf("Enter %d number: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n array is: ");
    for(i=0;i<n;i++)
    {
        if(i==0)
            printf(" %d",arr[i]);
        else
            printf("-->%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if((arr[i]%2)==0)
            evn+=arr[i];
        else
            odd+=arr[i];
    }
    printf("\nsum of odd is: %d ",odd);
    printf("\nsum of evn is: %d \n\n",evn);
    printf("------------------------------------*THE END*--------------------------------");
    return 0;

}
