//Program(1)- Write a program to make use of I/O function using diffrent data types.

//Pre-Defined Value.

#include <stdio.h>
#include <conio.h>

 void main()
{
    int rollnum;
    float per;
    char grade;
 clrscr();
    rollnum = 101;
    per = 88.98;
    grade = 'A';

    printf("---Student Information---\n");
    printf("\n Roll Number: %d", rollnum);
    printf("\n Grade: %c", grade);
    printf("\n Percentage:%.f",per);
getch();
}
