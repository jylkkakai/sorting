
void bubble_sort(int *arr, int size){

    for(int i = 0; i < size - 1; i++){
	for(int j = 0; j < size - 1 - i; j++){
	    int left = arr[j];
	    int right = arr[j + 1];

	    if(left > right){
		arr[j] = right;
		arr[j + 1] = left;

	    }
	}
    }
}
