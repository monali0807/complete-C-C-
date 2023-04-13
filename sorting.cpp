#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {12,45,23,51,19,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}


// The line int n = sizeof(arr)/sizeof(arr[0]); is used to determine the number of elements in the array. The sizeof operator returns the size of the variable or data type in bytes. In this case, sizeof(arr) returns the total size of the array in bytes and sizeof(arr[0]) returns the size of a single element in the array in bytes.

// By dividing sizeof(arr) by sizeof(arr[0]), we get the number of elements in the array. This is useful because it allows the code to work for arrays of any size, rather than having to hard-code the number of elements. This means that the code can be used for any array of any size without modification.

// It's worth noting that the number of elements in an array can also be calculated by using arr.size() if the array is a container in C++ STL library.


