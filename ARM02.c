//Program(2)- Write a program to make use of I/O function using diffrent data types.

//User-Defined Value.

#include <stdio.h>
#include <conio.h>

 void main()
{
    int rollnum;
    float per;
    char grade;
clrscr();
    printf("\n Enter Students Roll Number:");
    scanf("%d", &rollnum);

    printf("\n Enter Students Percentage:");
    scanf("%f", &per);

    printf("\n Enter Students Grade:");
    scanf(" %c", &grade);

    printf("\n---Student Information---\n");
    printf("\n Roll Number is: %d", rollnum);
    printf("\n Percentage is: %f", per);
    printf("\n Grade is: %c", grade);
getch();
}
