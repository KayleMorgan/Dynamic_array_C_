#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min_of_arr(int *arr, int size) 
{
    int min = *arr;
    for (int *ptr = arr + 1; ptr < arr + size; ptr++)
    {
        if (*ptr < min) 
        {
            min = *ptr;
        }
    }
    return min;
}

int max_of_arr(int* arr, int size)
{
    int max = *arr;
    for (int* ptr = arr + 1; ptr < arr + size; ptr++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
    }
    return max;
}

float average_of_arr(int *arr, int size)
{
    int sum = 0;
    for (int *ptr = arr; ptr < arr + size; ptr++)
    {
        sum += *ptr;
    }
    return (float)sum / size;
}


int main()
{
    int size, min = 1, max = 100; 
    
    srand(time(NULL)); //Rand generate different number

    //Enter and check size
    do 
    {
        printf("Enter size of array (%1-%100): ");
        scanf_s("%d", &size);
    } while (size < 1 || size > 100);

    //Allocating memory for a dynamic array
    int* arr = (int*)malloc(size * sizeof(int));


    //Generate array
    for (int i = 0; i < size; i++) 
    {
        arr[i] = min + rand() % (max - min + 1);
    }

    //Output array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n"); //endline

    //Output result
    printf("Max is: %d \n", max_of_arr(arr, size));
    printf("Min is: %d \n", min_of_arr(arr, size));
    printf("Average is: %f \n", average_of_arr(arr, size));

    //freeing memory
    free(arr);
    return 0;
}
/*
                                  /\
                                 /  \
                                /    \
       |\______________________Z      Z________________________/|
       |                                                        |
       |                                                        |
       |       000000000                        000000000       |
       |     0000000000000                    0000000000000     |
       |       000000000                        000000000       |
        \                                                      /
         \___                                              ___/ 
             \                                            /
              \________                         _________/
                       \                       /
                        \_____________________/
                              by Flamme
*/