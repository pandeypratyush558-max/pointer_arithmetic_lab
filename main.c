#include <stdio.h>
#include "pointers_lab.h"

#define SIZE 5

int main(void)
{
    int arr[SIZE];

    printf("========================================\n");
    printf("         POINTERS LAB TESTER\n");
    printf("========================================\n\n");

    get_array(arr);

    printf("\nOriginal Array:\n");
    print_array(arr, SIZE);

    printf("\n----------------------------------------\n");
    printf("Choose an operation:\n");
    printf("1. Print Array Addresses\n");
    printf("2. Pointer Traversal\n");
    printf("3. Reverse Array\n");
    printf("4. Rotate Array\n");
    printf("5. Partition Even/Odd\n");
    printf("----------------------------------------\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice)
    {
        case 1:
            printf("Array Addresses:\n");
            print_array_address(arr, SIZE);
            break;

        case 2:
            printf("Pointer Traversal:\n");
            pointer_traversal(arr, SIZE);
            break;

        case 3:
            reverse_pointer(arr, SIZE);
            printf("Reversed Array:\n");
            print_array(arr, SIZE);
            break;

        case 4:
        {
            int k = get_input();
            rotate_array(arr, SIZE, k);

            printf("Rotated Array:\n");
            print_array(arr, SIZE);
            break;
        }

        case 5:
            partition_even_odd(arr, SIZE);

            printf("Partitioned Array:\n");
            print_array(arr, SIZE);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}