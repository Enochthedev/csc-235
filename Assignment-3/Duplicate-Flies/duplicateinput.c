# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// function to find smallest in array
int smallest(int arr[], int n)
{
    int i, min = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}



int main()
{
    int num;
    char file[100], id[100];
    int counter = 0;
    int trials = 0;
    FILE * fpointer = fopen("file.in", "r+");
    FILE * buffer = fopen ("standard_output.txt", "w+");
    fscanf(fpointer, "%d", &num);
    fscanf(fpointer, "%d", &num);
    char total_files[3][50];
    char total_id[3][50];

    while (trials != 2)
    {
        while (num != counter)
        {    
        fscanf(fpointer, "%s", file);    
        strcpy(total_files[counter], file);

        fscanf(fpointer, "%s", id);
        strcpy(total_id[counter], id);
        
        counter++;
        }
        counter = 0;

        int total_id_int[3];
        for (int i = 0; i < 3; i++)
        {
            total_id_int[i] = atoi(total_id[i]);
        }
        int id_len = sizeof(total_id_int)/sizeof(total_id_int[0]);
        int file_len = sizeof(total_files)/sizeof(total_files[0]);
        int valid = 0;
        
        //sort the total_id_int array
        for (int i = 0; i < id_len -1; i++)
        {
            for (int j = i + 1; j < id_len - 1; j++)
            {
                if (total_id_int[i] > total_id_int[j])
                {
                    int temp = total_id_int[i];
                    total_id_int[i] = total_id_int[j];
                    total_id_int[j] = temp;
                }
            }
        }

        // compare all values in total_files    
        for (int i = 0; i < file_len - 1; i++)
        {
            for (int j = i + 1; j < file_len - 1; j++)
            {
                if (strcmp(total_files[i], total_files[j]) == 0)
                {
                    printf("\n"); 
                }
                else
                { 
                    for (int i = 0; i < id_len - 1; i++)
                    {
                        printf("%d ", total_id_int[i]);
                        fprintf(buffer, "%d ", total_id_int[i]);
                        
                        valid = 1;
                    }

                }
            }
        }
        //if all the values are the same, then print the smallest id   
         
        if (smallest(total_id_int, id_len - 1 ) == total_id_int[0])
        {
            if (valid == 1)
            {
                valid = 0;   
            }
            else
            {
                printf("%d\n", smallest(total_id_int, id_len ));
                fprintf(buffer, "\n");
                fprintf(buffer, "%d\n", smallest(total_id_int, id_len ));
            }
            
        }
    trials++;
    fscanf(fpointer, "%d", &num);
    }
    fclose(fpointer);
    fclose(buffer);
    return 0;
}



    
