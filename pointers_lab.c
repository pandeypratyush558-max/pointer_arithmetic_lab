#include <stdio.h>
#include "pointers_lab.h"
// In a function parameter, 'arr' is a pointer to the first element of the array.
// arr == &arr[0]
// *arr == arr[0]
void print_array(int arr[], int size)
{
  for(int i = 0; i < size; i++ )
  {
    printf("%d \n", *(arr + i));
  }
}

void print_array_address(int arr[], int size)
{
  for(int i = 0; i < size; i++ )
  {
    printf("%p \n", (void*)(arr + i));
  }
}

void pointer_traversal(int*ptr, int size)
{
  for(int i = 0; i < size; i++ )
  {
    printf("%d \n", *(ptr));
    ptr++;
  }
}

void reverse_pointer(int arr[], int size)
{
    int*p = arr;
    int*q = arr + size - 1;
    for(int i = 0; i < size/2; i++)
    {
        int temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}

void get_array(int array[])
{
  for(int i = 0; i < 5; i++)
  {
    printf("Enter the value of array[%d]: ", i);
    scanf("%d", (array + i));
  }
}

int get_input()
{
  int k;
  printf("Enter the value of k: ");
  scanf("%d", &k);
  return k;
}

void rotate_array(int arr[], int size, int k)
{
  k %= size; // to handle cases where k is greater than size
  for(int i = 0; i < k; i++)
  {
    int temp = *(arr + size - 1);
    for(int j = 0; j < size - 1; j++)
    {
      *(arr + size - 1 - j) = *(arr + size - 2 - j);
    }
    *arr = temp;
  }
}

void partition_even_odd(int arr[], int size)
{
  int*p = arr;
  int*q = arr + size - 1;
  while(p < q)
  {
    if(*p%2 != 0 && *q%2 == 0)
    {
      int temp = *p;
      *p = *q;
      *q = temp;
      p++;
      q--;
    }
    else if(*p%2 != 0 && *q%2 != 0)
    {
      q--;
    }
    else if(*p%2 == 0 && *q%2 == 0)
    {
      p++;
    }
    else if(*p%2 == 0 && *q%2 != 0)
    {
      q--;
      p++;
    }
  }

}
