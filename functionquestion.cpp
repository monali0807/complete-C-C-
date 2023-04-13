#include <iostream>
using namespace std;
int OctalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << OctalToDecimal(n) << endl;
    return 0;
}

// *********************Binary to Decimal***************//
/*#include <iostream>
using namespace std;
int BinaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << BinaryToDecimal(n) << endl;
    return 0;
}*/

// *******************PYTHAGORIAN TRIPLET****************//
/*#include <iostream>
using namespace std;
bool check(int x, int y, int z)
{
    int a = max(x, max (y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else if (a == z)
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagorian triplet" << endl;
    }
    else
    {
        cout << "Not a pythagorian triplet" << endl;
    }

    return 0;
}*/

// ***************SUM OF N NATURAL NO.*************//
/*#include <iostream>
using namespace std;
int sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
     return 0;
}*/

// ******************PASCAL TRIANGLE *****************//
/*#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }


    return 0;
}*/

// ******************  nCr  *******************//
/*#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << ans << endl;
    return 0;
}*/

// ******************FACTORIAL*****************//
/*#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans << endl;
    return 0;
}*/

// ********************FIBONACCI SEQUENCE*****************//
/*#include <iostream>
using namespace std;
void fib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}*/

// ********************PRIME NUMBER******************** //
/*#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
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
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}*/
