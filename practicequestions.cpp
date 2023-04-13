#include <iostream>
#include <climits>
using namespace std;

int sumarray(int arr[],int arr_size){
    int sum = 0;
    for(int i = 0; i<arr_size; i++){
        sum = sum + arr[i];
    }
    
    return sum;
}

int main() {
    // Write C++ code here
    int arr[]= {2,7,1,-4,11};
    int arr_size = 5;
    
    cout<< "Total Sum of Array is : "<<sumarray(arr,arr_size);
    
}



// ********************FIBONACCI SERIES*****************
/*#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}*/






//***************find sum of bits of two given numbers*******************
/*#include <iostream>
using namespace std;
int setbit(int num)
{
    int count=0;
    while(num)
    {
        if(num&1==1)
        {
            count+=1;
        }
    num=num>>1;

    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;

    int set_bit_in_a=setbit(a);
    int set_bit_in_b=setbit(b);
    cout<<"sum of set bits present in a and b are : "<<set_bit_in_a+set_bit_in_b;
    return 0;

}*/

//******************BASIC FUNCTION PROBLEMS*******************
//******************find Nth term of AP *****************
/*#include <iostream>
using namespace std;
int APterm(int n)
{
    int AP = 3 * n + 7;
    return AP;
}
int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;
    cin >> n;
    APterm(n);
    cout <<"The Nth term is "<< APterm(n) << endl;
}*/

// *********************BINARY TO DECIMAL******************
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         if (digit == 1)
//         {
//             ans = ans + (pow(2, i));

//         }
//             n = n / 10;
//             i++;
//     }
//     cout << " Answer is " << ans << endl;

//     return 0;
// }

// ******************HOW MANY NOTES****************
// #include <iostream>
// using namespace std;

// int main()
// {
//     int amount = 1071;
//     int Rs100, Rs50, Rs20, Rs1;
//     switch (1)
//     {
//     case 1:
//         Rs100 = amount / 100;
//         amount = amount % 100;
//         cout << " no. of 100 Rs = " << Rs100 << endl;

//     case 2:
//         Rs50 = amount / 50;
//         amount = amount % 50;
//         cout << " no. of 50 Rs = " << Rs50 << endl;

//     case 3:
//         Rs20 = amount / 20;
//         amount = amount % 20;
//         cout << " no. of 20 Rs = " << Rs20 << endl;

//     case 4:
//         Rs1 = amount / 1;
//         amount = amount % 1;
//         cout << " no. of 1 Rs = " << Rs1 << endl;
//     }
//
//  return 0;
// }