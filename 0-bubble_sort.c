#include "sort.h"


void bubble_sort(int *array, size_t size)
{
  size_t i = 0, j = 0, temp;
  size_t is_sorted = 0;
  if (array == NULL || size < 2)
	  return;
 /* 
  for (i = 0 ; i < size - 1 ; i++)
  {
    if(array[i] > array[i + 1]){
      break;
    } 
  }
  
  if(i == size - 1) return;
*/
  for (i = 0 ; i < size - 1  ; i++)
  {
    for (j = 0 ; j < size - 1; j++)
    {
      if (array[j + 1] < array[j] ){
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
	is_sorted = 1;
      }
    }
    if (!is_sorted)
              return;
    print_array(array, size);
  }

}

