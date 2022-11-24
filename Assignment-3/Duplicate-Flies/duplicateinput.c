#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int trials;
    int comparable = 0;
    int number_file;
    int t;
    int lowest_value = 0;
    char name_of_file[100][50];
    int file_id[100];

    FILE *fp;
    //open the file self.in and read first line for the number of test cases N
    fp=fopen("file.in","r");
    if(fp==NULL){
        printf("null, file does not exist");
        exit(0);
    }


    fscanf(fp,"%d",&trials);
    //print out N
    printf("%d \n",trials);
    for (int i = 0; i< trials; i++) {

        fscanf(fp,"%d", &number_file);

        int j = 0;
       
        while (j<number_file) {
            fscanf(fp,"%s %d", name_of_file[j], &file_id[j]);
            j++;
        }
        printf("\n");
        lowest_value = file_id[0];
        for (int j = 0; j< number_file; j++) {
//            printf("%s %d\n", name_of_file[j], file_id[j]);
            for (int i = j + 1; i < number_file; i++) {
                comparable = strcmp(name_of_file[j], name_of_file[i]);
                if((strcmp(name_of_file[j], name_of_file[i]) == 0) &&  (lowest_value > file_id[j])){
                    
                    lowest_value = file_id[j];
                }
                else if((strcmp(name_of_file[j], name_of_file[i]) != 0) && (file_id[j] > file_id[i])){
                    t = file_id[j];
                    file_id[j] = file_id[i];
                    file_id[i] = t;
                }
            }
        }
        for (int j = 0; j< number_file; j++) {
            if (comparable != 0){
                printf("%d\n", file_id[j]);
            }
        }
        if (comparable == 0){
            printf("%d\n", lowest_value);
        }
    }
}

