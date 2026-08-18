//Program(7)- Write a program to swap two numbers using temporary variable.

//Pre-Defined Value

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, temp;
clrscr();
    a = 111;
    b = 222;

    printf("\n Before Swapping:");
    printf("\n a= %d, b= %d \n", a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\n After Swapping");
    printf("\n a= %d, b= %d \n", a,b);
getch();
}