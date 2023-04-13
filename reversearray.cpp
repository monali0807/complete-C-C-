// *******************merge sorted array *******************
#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {2,5,6};

    int arr3[9] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 9);
    return 0;
}


// *******************merge sorted array (Another way) *******************
/*#include <iostream>
#include <vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}*/

// *****************************Reverse an array using (STL)*************************
/*#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v){

    int s = 0, e = v.size()-1;

    while (s<=e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;

}

void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }cout<<endl;


}

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverse(v);
    cout<<"Printing reverse array is : "<<endl;
    print(ans);


    return 0;
}*/

// *****************************Alternet Reverse an array*************************
/*#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapAlternet(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            // swap(arr[i], arr[i + 1]);
            // use above method or below method
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {5, 6, 7, 8, 9};

    swapAlternet(even, 6);
    printArray(even, 6);

    cout << endl;

    swapAlternet(odd, 5);
    printArray(odd, 5);

    return 0;
}*/

// *****************************Reverse an array*************************
/*#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {6, 7, 8, 9, 1};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
    return 0;
}*/
