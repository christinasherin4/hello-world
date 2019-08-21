
#include<stdio.h>
#include<conio.h>
/*************************************************************************************************************************************************
author:L.Christina Sherin
Purpose:to read 2 numbers and print sum and average
********************************************************************************************************************************************************/
void main()
{
    int fn,sn,sum;
    float average;
    //read values from user
    printf("enter first number");
    scanf("%d",&fn);
    printf("enter second number");
    scanf("%d",&sn);
    //logic
    sum = fn + sn;
    average = sum/2.0;
    printf("sum = %d,average = %f,sum,average");
    getch();
}
