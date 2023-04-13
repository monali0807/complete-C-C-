#include<iostream>
using namespace std;
//  for example: 72 24 --> ans is 24
int gcd(int a, int b){
    if(a==0)
    return b;
    if(b==0)
    return a;

    while (a != b)
    {
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
    
}
int main()
{
    int a, b;
    cout<<"Enter the valuue of a and b "<<endl;
    cin>>a>>b;
    /*for output try these values
    1) 24 30 --> ans is 6
    2) 24 18 --> ans is 6
    3) 36 60 --> ans is 12
    4) 68 119 --> ans is 17
    5) 72 24 --> ans is 24*/
    int ans = gcd(a,b);
    cout<<"The GCD of a and b is "<<ans<<endl;
    return 0;
}


// *********basic prime no. code **************
/*#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }
    return 0;
}*/