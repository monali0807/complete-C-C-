#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow (lastdigit,3);
        n = n / 10;
    }

    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not armstrong" << endl;
    }

    return 0;
}



 // **********************REVERSE NUMBER*******************//
/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << reverse << endl;
    return 0;
}*/

// *******************PRIME NUMBER******************//
/*#include <iostream>
#include <Cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "non-prime" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "prime" << endl;
    }
    return 0;
}*/

// ********************Below complete code is from CODEWITHHARRY ****************************//

/*// #include <iostream>

// using namespace std;
// int main()
// {
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

/*For loop in C++*/
// int i=1;
// cout<<i;
// i++;

// Syntax for for loop
// for(initialization; condition; updation)
// {
//     loop body(C++ code);
// }

// for (int i = 1; i <= 40; i++)
// {
//     /* code */
//     cout<<i<<endl;
// }

// Example of infinite for loop
// for (int i = 1; 34 <= 40; i++)
// {
//     /* code */
//     cout<<i<<endl;
// }

/*While loop in C++*/
// Syntax:
// while(condition)
// {
//     C++ statements;
// }

//  Printing 1 to 40 using while loop
// int i=1;
// while(i<=40){
//     cout<<i<<endl;
//     i++;
// }

// Example of infinite while loop
// int i = 1;
// while (true)
// {
//     cout << i << endl;
//     i++;
// }

/* do While loop in C++*/
// Syntax:
// do
// {
//     C++ statements;
// }while(condition);

//  Printing 1 to 40 using while loop
// int i=1;
// do{
//     cout<<i<<endl;
//     i++;
// }while(false);

//     return 0;
// }*/

// #include <iostream>
// using namespace std;
// // MULTIPLICATION TABLE BY LOOPS
// int main()
// {
//     int i = 1, n = 3;
//     // while (i<=10)
//     // {
//     //     cout<<i*n<<endl;
//     //     i++;
//     // }

//     // do
//     // {
//     //    cout<<i*n<<endl;
//     //    i++;
//     // } while (i<=10);

//     for (int i = 1; i <= 11; i++)
//     {
//         cout << i * n << endl;
//     }

//     return 0;
// }
