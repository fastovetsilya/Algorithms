#include <iostream>

using namespace std; 

void swap(int array[], int first_index, int second_index) {
    int tmp = array[first_index];
    array[first_index] = array[second_index]; 
    array[second_index] = tmp;
};

int findSmallestRemainingElement(int array[], int arr_size, int index) {
    int index_of_smallest_value = index; 
    for(int i = index; i < arr_size; i++) {
        if(array[i] < array[index_of_smallest_value]) {
            index_of_smallest_value = i;	
	};	
    };
    return index_of_smallest_value;
};

void bubble_sort(int array[], int arr_size) {
    for(int i = 0; i < arr_size - 1; i++) {
        for(int j = 0; j < arr_size - 1 - i; j++) {
            if(array[j] > array[j + 1]) {
                swap(array, j, j + 1);
	    };	    
	};	
    };
};

void insertion_sort(int array[], int arr_size) {
    for(int i = 0; i < arr_size; i++) {
        int index = findSmallestRemainingElement(array, arr_size, i); 
        swap(array, i, index);
    };
};

int main() {
    int A[] = {8,5,7,3,2};
    int arr_size = sizeof(A) / sizeof(A[0]);
    insertion_sort(A, arr_size);
    cout<<"Result array is: "<<endl;
    for(int i = 0; i < arr_size; i++) {
        cout<<A[i]; 
    };
    cout<<endl; 
    return 0;
};
