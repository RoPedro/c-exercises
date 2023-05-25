#include <stdio.h>

int main(){
   int array[6] = {3, 5, 2, 21, 1, 6};
   int arraySize = sizeof(array) / sizeof(array[0]);
   int i, j, l, key;
   for (i = 1; i < arraySize; i++)
   {
       key = array[i];
       j = i - 1;
       while (array[j] > key && j >= 0)
       {
            array[j + 1] = array[j];
            j = j - 1;
       }
       array[j + 1] = key;
   }
   
   for (l = 0; l < arraySize; l++)
   {
       printf("%d ", array[l]);
   }

   return 0;
}