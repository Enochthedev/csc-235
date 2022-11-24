/*Matric Number: 222507
* Name: Omosebi Enoch
* Program: C program to check if a number is self describing
* level: 200
*/
/* write a code to get an inp*/
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/* make a function named self describing and check if a number is self describing 
* if the number is self describing , print is self describing */
int self_describing(int num)
{
    /* This is converting the number to a string and then getting the length of the string. */
    int i, j, count, digit, temp, len;
    char str[100];
    /* Converting the number to a string and then getting the length of the string. */
    sprintf(str, "%d", num);
    len = strlen(str);
    /* This is a for loop that is used to iterate through the length of the string. */
    for(i = 0; i < len; i++)
    {
        /* This is a for loop that is used to iterate through the length of the string. */
        count = 0;
        digit = str[i] - '0';
        for(j = 0; j < len; j++)
        {
            temp = str[j] - '0';
            if(temp == i)
            {
                count++;
            }
        }
        if(count != digit)
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int N;
    FILE *fp;
    //open the file self.in and read first line for the number of test cases N
    fp=fopen("self.in","r");
    if(fp==NULL){
        printf("null, file does not exist");
        exit(0);
    }
    fscanf(fp,"%d",&N);
    //print out N
    printf("%d \n",N);
    //run the loop N times,name the variable runtime
    int runtime;
    //run the loop
    for(runtime=0;runtime<N;runtime++){
        //read the next line from the file and store it in the variable num
        int num;
        fscanf(fp,"%d",&num);
        //print out num
        printf("%d ",num);
        //call the function self_describing and pass the variable num as the argument
        int result=self_describing(num);
        //if result is 1, print "self describing", if result is 0, print "not self describing"
        if(result==1){
            printf("self describing ");
        }else{
            printf("not self describing ");
        }
        //print out a new line
        printf("\n");
    }



}
