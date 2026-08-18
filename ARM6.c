//Program(6)- Write a program to calculate the average of three number.

//User-Defined Value

#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, c, total, average;
clrscr();
    printf("Enter First Number");
    scanf("%f", &a);
    
    printf("Enter Second Number");
    scanf("%f", &b);
    
    printf("Enter Third Number");
    scanf("%f", &c);

    total = (a+b+c);
    average = total/3;
    printf("\n Average = %f", average);
getch();
}