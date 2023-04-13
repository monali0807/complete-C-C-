// ************************find maximum and minimum number of array using function***************************
/*#include <iostream>
#include <climits>
using namespace std;

int getMin(int arr[], int n)
{
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minNo = min(minNo, arr[i]);
    }
    return minNo;
}
int getMax(int arr[], int n)
{
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
    }
    return maxNo;
}
int main()
{
    int n;
    cin >>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
       cin>> arr[i];
    }

   
    cout<<"Maximum no. is : "<<getMax(arr, n)<<endl;
     cout<<"Minimum no. is : "<<getMin(arr, n)<<endl;

    return 0;
}*/











//  ******************************************************************************************

//   BELOW  CODE

//   IMPORTANT

// explanation / code about how to intialize entire array by any value.

//   *********************************************************************************************

// We can initialize the array with any value by using the fill_n command

// Example code:

/*#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 5; i++){
        cout << array[i] << endl;
    }

}*/
/*This is one of the method and the 'for loop' can also be used
but it is does not looks good and professional.*/





// ***************find max and min no. in array without using function********************
// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxNo = INT_MIN;
//     int minNo = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         // if (arr[i] > maxNo)
//         // {
//         //     maxNo = arr[i];
//         // }
//         // if (arr[i] < minNo)
//         // {
//         //     minNo = arr[i];
//         // }
//         /*use above if method or use below method*/
//         maxNo = max(maxNo, arr[i]);
//         minNo = min(minNo, arr[i]);
//     }
//     cout << maxNo << " " << minNo << endl;

//     return 0;
// }