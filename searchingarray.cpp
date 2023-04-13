// ***************** chatGPT code (book allocation problem) ******************

/*#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &pages, int students, int curr_pages) {
    int curr_student = 1;
    int pages_count = 0;
    for (int i = 0; i < pages.size(); i++) {
        if (pages_count + pages[i] > curr_pages) {
            curr_student++;
            pages_count = pages[i];
            if (curr_student > students) {
                return false;
            }
        } else {
            pages_count += pages[i];
        }
    }
    return true;
}

int findMaxPages(vector<int> &pages, int students) {
    int start = 0, end = 0;
    for (int i = 0; i < pages.size(); i++) {
        end += pages[i];
    }
    int ans = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (isPossible(pages, students, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, k, a;
    cin >> n >> k;
    vector<int> pages;
    for (int i = 0; i < n; i++) {
        cin >> a;
        pages.push_back(a);
    }
    int max_pages = findMaxPages(pages, k);
    cout << max_pages << endl;
    return 0;
}*/

// ********************Painters partition problem (same as Book Allocation ) (codestudio) *************************
/*#include<vector>
using namespace std;

bool isPossibleSol(vector<int> &boards, int n, int k, int mid){
    int painter  = 1;
    int boardsPainted = 0;

    for(int i = 0; i<n; i++){
        if(boardsPainted + boards[i]<=mid){
            boardsPainted = boardsPainted + boards[i];
        }
        else{
            painter++;
            if(painter > k || boards[i] > mid){
                return false;
            }
            boardsPainted = boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    int n = boards.size();
    for(int i = 0; i<n; i++){
        sum = sum + boards[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(isPossibleSol(boards,n,k,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}*/

// *******************Book Allocation Problem (codestudio)********************

/*#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;

    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;

    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}*/

// *************squart root of integer (leetcode) *******************
/*class Solution {
public:
 long long int binarySearch(int n)
 {
     int s=0;
     int e=n;
     long long int mid=s+(e-s)/2;
     long long int ans=-1;
     while(s<=e)
     {
         long long int square=mid*mid;
         if(square==n)
         {
             return mid;
         }
         if(square<n)
         {
             ans=mid;
             s=mid+1;
         }
         else
         {
             e=mid-1;
         }
         mid=s+(e-s)/2;
     }
     return ans;
 }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};*/

// *************squart root of integer *******************
/*#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {

        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;

        long long int ans = -1;
        while(s<=e) {

            long long int square = mid*mid;

            if(square == n)
                return mid;

            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {

    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}*/

// *******************search in rotated sorted array(codestudio) *******************
/*#include<vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if( k >= arr[pivot] && k <= arr[n-1])
    {//BS on second line
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {//BS on first line
        return binarySearch(arr, 0, pivot - 1, k);
    }

}*/

// **********************fine pivot in rotated sorted array********************
/*#include <iostream>
using namespace std;
int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}
int main()
{
    int arr[7] = {11, 22, 23, 24, 25, 9, 10};

    cout << "pivot is : " << getpivot(arr, 7) << endl;
    return 0;
}*/

// *******************find peak index in mountain array***********
/*#include<iostream>
using namespace std;
int peakvalue(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
       if (arr[mid]<arr[mid+1])
       {
        s=mid+1;
       }
       else
       {
        e=mid;
       }
       mid=s+(e-s)/2;

    }
    return s;

}
int main()
{
    int arr[4]={1,3,5,2};

    cout<<"peak value index is : "<<peakvalue(arr, 4)<<endl;
     return 0;
}*/

// *******************find peak index in mountain array***********
// ***************leetcode problem****************
/*#include<vector>
using namespace std;

class Solution {
public:

    int find_pivot(vector<int> v) {
    int s = 0, e = v.size() - 1;
    int mid=(s + e) / 2;
    while (s < e)
    {
        if(v[mid] < v[mid+1])
                // s=mid+1;                //explanation in copy
            else
                e = mid;

        mid = (s + e) / 2;
    }
    return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};*/

// *****************coding ninjas code(First and Last position(occurrence))*************************

/*#include <bits/stdc++.h>
int firstOcc(vector<int>& arr, int n, int key){
    int s = 0, e = n-1;
    int ans = -1;
    while (s<=e)
    {
        int mid= s+(e-s)/2;
        if (arr[mid]==key)
        {
            ans=mid; //store answer
            e=mid-1; //because here we chech left most part
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid= s+(e-s)/2;
    }
    return ans;

}

int lastOcc(vector<int>& arr, int n, int key){
    int s = 0, e = n-1;
    int ans = -1;
    while (s<=e)
    {
        int mid= s+(e-s)/2;
        if (arr[mid]==key)
        {
            ans=mid;
            s=mid+1; //because here we chech right most part
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid= s+(e-s)/2;
    }
    return ans;

}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // pair<int, int> p;                    //explanation inside copy .....check it
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}*/

// *****************************First and Last position(occurrence)*******************************
// ******************Love Babbar code********************
/*#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int ans = -1;
    while (s<=e)
    {
        int mid= s+(e-s)/2;
        if (arr[mid]==key)
        {
            ans=mid; //store answer
            e=mid-1; //because here we chech left most part
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid= s+(e-s)/2;
    }
    return ans;

}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int ans = -1;
    while (s<=e)
    {
        int mid= s+(e-s)/2;
        if (arr[mid]==key)
        {
            ans=mid;
            s=mid+1; //because here we check right most part
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid= s+(e-s)/2;
    }
    return ans;

}
int totalOcc(int arr[], int n, int key){
    int firstidx=firstOcc( arr,n, key);
    int lastidx=lastOcc( arr,n, key);
    int total=( lastidx-firstidx)+1;
    return total;
}
int main()
{
    int odd[7]={1,2,3,3,3,3,5};
    cout<<"The first occurrence of index is : "<<firstOcc(odd, 7, 3)<<endl;
    cout<<"The last occurrence of index is : "<<lastOcc(odd, 7, 3)<<endl;
    cout<<"The total no. of occurrence of 3 is : "<<totalOcc(odd, 7, 3);

    return 0;
}*/

// *********************Binary Search (Love Babbar Code)*************************
/*#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) //here n=size
{
    int start = 0;
    int end = n - 1; //here n=size
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // int mid=(start+end)/2;   //if int ki value 2^31-1 hoti hai toh suppose start = 2^31-1 hota hai and end=2^31-1 hota hai toh start+end ki value TLE(Time Limit Exceed) layegi. sooooo, we use above method.
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};
    cout << "Index of 4 is : " << binarySearch(even, 6, 4) << endl;
    cout << "Index of 9 is : " << binarySearch(odd, 5, 9) << endl;
    return 0;
}*/

// ****************binary search (Apna College Code)****************//
/*#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return e = mid - 1;
        }
        else
        {
            return s = mid + 1;
        }

    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarysearch(arr, n, key) << endl;
    return 0;
}*/

// ********************linear search (Apna College Code)******************//
/*#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter number :"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter array element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout<<"Enter key :"<<endl;

    cin >> key;
     cout<<"answer index is :"<<endl;
    cout << linearsearch(arr, n, key) << endl;
    return 0;
}*/