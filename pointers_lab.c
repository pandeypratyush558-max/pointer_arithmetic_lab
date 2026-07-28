#include <stdio.h>

// so *arr = address of arr[] and aslo the add of arr[0]
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
    printf("%d \n", (arr + i));
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


int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int*ptr = arr;
    reverse_pointer(arr, size);
    pointer_traversal(ptr, size);
}    