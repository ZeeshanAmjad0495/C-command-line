#include "stdio.h"
#include "stdlib.h"

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

   
return 0;
}
// changes
