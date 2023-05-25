#include <stdio.h>

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int i;
    int totalResult = 0;
    for (i = 0; i < arraySize; i++)
    {
        totalResult += array[i];
    }
    printf("%d", totalResult);

    return 0;
}