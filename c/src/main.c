#include <stdio.h>
#include "utils.h"


int main() {

	printf("Hello World!\n");

    int arr[] = {1,2,3,4};

    int *arr_p = arr;

    print_array(arr_p, 4);



	return 0;
}
