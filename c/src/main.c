#include <stdio.h>
#include "utils.h"
#include "sort.h"

int main() {

	printf("Hello World!\n");

    int arr[] = {1,2,3,4};
    int arr2[] = {3,9,6,7,54,8,1,0,5};
    int *arr_p = arr2;

    print_array(arr_p, 9);
    bubble_sort(arr_p, 9);
    print_array(arr_p, 9);

    int arr3[20] = {0};
    arr_p = arr3;
    random_arr(arr_p, 20);
    print_array(arr_p, 20);
    bubble_sort(arr_p, 20);
    print_array(arr_p, 20);

    int arr4[50] = {0};
    arr_p = arr4;
    random_arr(arr_p, 50);
    print_array(arr_p, 50);
    bubble_sort(arr_p, 50);
    print_array(arr_p, 50);

    return 0;
}
