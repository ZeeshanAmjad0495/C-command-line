#include "stdio.h"
#include "unistd.h"
#include "sys/wait.h"
#include "stdlib.h"

void getEven(int *, int);
void getMin(int *, int);

int main(int argc, char const *argv[])
{
    int * data;
    int size = argc;
    printf("%dSize=\n", size);
    printf("%d\n", argc);
    data = (int *)calloc(size, sizeof(int));
    int i = 0;

    for (i = 1; i < size; i++)
    {
        data[i] = atoi(argv[i]);
        printf("%d\n", data[i]);
    }

   


/*
    pid_t child_min, child_even;

    child_min = fork();

    if (child_min == 0)
    {
        printf("Child Even Numbers: ");
        getEven(array_of_ints,size);
    }

    else
    {

        child_even = fork();

        if (child_even == 0)
        {
            int min = getMin(arrayOfNumbers,size);
            printf("Child Minimum Number: %d",min);
            
        }

        else
        {
        }
    }
*/
return 0;
}
/*
void getEven(int *numbers,int size)
{
    int i = 0;
    for(;i<size;i++)
    {
        if(numbers[i]%2==0)
        {
            printf(" %d, ",numbers[i]);
        }
    }
}

void getMin(int *numbers,int size)
{
    int i = 1;
    int temp=numbers[0];

    for(;i,size;i++)
    {
        if(temp>numbers[i])
        {
            temp = numbers[i];

        }
    }
    return temp;
}*/