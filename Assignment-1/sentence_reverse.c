#include <stdio.h>
#include <string.h>
/*Matric Number: 222507
* Name: Omosebi Enoch
* Program: C program to reverse a sentence
* level: 200
*/
int main()
{
    char str[100];
    int i, j, len, temp;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reverse string is: %s", str);
    return 0;
}