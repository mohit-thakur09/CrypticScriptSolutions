
#include<stdio.h>

int fun1(int x,int y)
{
    return x+y;

}

void fun2(int *x,int *y)
{
    *x = *x + *y;

}


void fun3(int &x, int &y)
{
    x=x+y;

}

int main()
{
    int a=3,b=6;
    //call by value
    int c = fun1(a,b);

    //call by address
    fun2(&a,&b);

    //call by refernce
    fun3(a,b);

    printf("%d",a);
    return 0;
}

