//Program(8)- Write a program to swap two numbers using temporary variable.

//User-Defined Value

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, temp;
clrscr();
    printf("\n Enter First Number:");
    scanf("%d", &a);
    printf("\n Enter Second number:");
    scanf("%d", &b);

    printf("\n Before Swapping");
    printf("\n a= %d, b= %d \n", a,b);

    temp =a;
    a = b;
    b = temp;
    
    printf("\n After Swapping");
    printf("\n a= %d, b= %d \n", a,b);
getch();
}
