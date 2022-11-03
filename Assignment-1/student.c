#include <stdio.h>
/*Matric Number: 222507
* Name: Omosebi Enoch
* Program: code to collect names of 10 students
* level: 200
*/
int main()
{
    char name[10][20];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name[i]);
    }
    printf(name[0]);
    return 0;
}