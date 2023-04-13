#include<iostream>
#include<climits>
using namespace std;
int largestSum(int arr[][3], int row, int col){
    int maxi=INT_MIN;
    int rowIndex=-1;
    cout<<"printing sum-->"<<endl;
    for (int row = 0; row < 3; row++)
    {
        int sum=0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum>maxi)
        {
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}
int main()
{
    int arr[3][3];
    // you can use i and j also as i=row and j=column
    // taking input--> row wise
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    cout<<"printing the array"<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
   int ans=largestSum(arr,3,3);
   cout<<"max row is at index "<<ans<<endl;
    return 0;
}

// *************print row wise and column wise sum ***************
/*#include<iostream>
using namespace std;
void PrintColSum(int arr[][3], int i, int j){
     cout<<"printing sum-->"<<endl;
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
        
    }
    cout<<endl;
}
// void PrintRowSum(int arr[][3], int i, int j){
//      cout<<"printing sum-->"<<endl;
//     for (int i = 0; i < 3; i++)
//     {
        
//         int sum=0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += arr[i][j];
//         }
//         cout<<sum<<" ";
        
//     }
//     cout<<endl;
// }
int main()
{
    int arr[3][3];

    // taking input--> row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"printing the array"<<endl;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<"printing the array"<<endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // PrintRowSum(arr, 3, 3);
    PrintColSum(arr,3,3);
    return 0;
}*/


//************* Basic 2d array introduction and searching in array ****************
/*#include<iostream>
using namespace std;

 bool isPresent(int arr[][4], int target, int i, int j){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++){
            if (arr[i][j]==target)
            {
                return 1;
            }
            
        }
    }
    return 0;
 }
int main()
{
    int arr[3][4];

    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    // taking input--> row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    // taking input--> column wise
    /*for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[j][i];
        }
    }*/


    // output
    //  for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // ****************Time Complexity == O(row * col) ****************
    // **************** if we are using (n and m) then Time Complexity == O(n * m)
    // **************** if there is square matrix i.e.(arr[3][3]) then Time Complexity == O(n^2) 
    
//     cout<<"Enter the element to search"<<endl;
//     int target;
//     cin>>target;
//     if(isPresent(arr, target, 3, 4)) {
//         cout<<"Element found"<<endl;
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }
    
//     return 0;
// }*/