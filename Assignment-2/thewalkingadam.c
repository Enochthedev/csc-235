/*Matric Number: 222507
* Name: Omosebi Enoch
* Program:The walking Adam
* level: 200
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int N;
    FILE *fp;
    fp=fopen("adam.in","r");	//open the file
    /*exception if adam.in does not exist and if its empty print null then exit*/
    if(fp==NULL){
        printf("null, file does not exist");
        exit(0);
    }
    fscanf(fp,"%d",&N);		//read the first line of the file and assign it to N
    /* debug by showing the value of N just to confirm*/
    printf("%d \n",N);
    /*run the loop N times*/
    /*each time the loop run move to the next line after printing the previous input*/
    for(int i=0;i<N;i++){
        char step[100];
        /*read the first line get the length and run a loop to the length*/
        fscanf(fp,"%s",step);
        int len=strlen(step);
        int count=0;
        for(int j=0;j<len;j++){
            /*if the first letter is U increment the count by 1*/
            if(step[j]=='U'){
                count++;
            }
            /*if the first letter is not U break the loop*/
            else{
                break;
            }
        }
        /*print the count*/
        printf("%s %d \n",step,count);
    }

    return 0;

}