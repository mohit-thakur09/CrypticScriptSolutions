#include<stdio.h>
#include<conio.h>
#include<time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void main()
 {
    int hh=0,mm=0,ss=0,i,j;
    for(i=0;;i++)
    {

        ss=i;
        printf("\r%d:%d:%d",hh,mm,ss);
        delay(1000);
        if(i>=59)
        {
            mm++;
            i=0;
        }
        if(mm>=59&&i<=59)
        {
             hh++;
             mm=0;
             i=0;
        }
        if(hh==24&&i<=59)
        {
            hh=0;
            i=0;

        }

    }



}
