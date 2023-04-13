#include <iostream>
using namespace std;

int main()
{
    // ************HOLLOW BUTTERFLY***********//
 /*int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = 2 * n - 2 * i; 
        for (int j = 1; j <= i; j++)
        {
            if ((j == i) || (j == 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if ((j == i) || (j == 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((j == i) || (j == 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if ((j == i) || (j == 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }*/
    

    // *************FLOYD'S TRIANGLE********** //
    /*int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count <<" ";
            count++;
        }
        cout << endl;
    }*/
    // **************PYRAMID PATTERN FOR NUMBERS*************//
    /*int n;
    cin >> n;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space--;
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }*/

    // **********HOLLOW RHOMBUS**********//
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            if ((i == 1) || (i == n) || (j == 1) || (j == n))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }*/

    // **************RECTANGULAR HOLLOW DIAMOND******************//
    /*int n;
    cin >> n;
    int space = (2 * n - 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j == 1) || (j == 2 * i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <=space; j++)
        {
            cout<<"*";
        }

        cout << endl;
        space--;
    }
    space=0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j == 1) || (j == 2 * i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <=space; j++)
        {
            cout<<"*";
        }
        cout << endl;
        space++;
    }*/

    // ************HOLLOW DIAMOND*************//
    /*int n;
    cin >> n;
    int space = (2 * n - 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j == 1) || (j == 2 * i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
        space--;
    }
    space=0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j == 1) || (j == 2 * i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
        space++;
    }*/

    // *************INVERTED HALF PYRAMID USING NUMBERS**************//
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i + 1; j++)
    //     {
    //         cout << i<<" ";
    //     }
    //     cout << endl;
    // }

    // **********ZIG-ZAG PATTERN********** //
    /*int n;
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
                }
        cout << endl;
    }*/

    // **************STAR/DIAMOND PATTERN************* //
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n-1; i>=1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    // *************PALINDROME PATTERN*************//
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j;
        for ( j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++ << " ";
        }

        cout << endl;
    }*/

    // **************NUMBER PATTERN*************//
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }*/

    // *************RHOMBUS PATTERN**************//
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }*/

    //**************0-1 PATTERN**************//
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << " 1";
            }
            else
            {
                cout << " 0";
            }
        }
        cout << endl;
    }*/

    // **********INVERTED PATTERN********** //
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout <<j<<" ";;
        }
        cout << endl;
    }*/

    // ************BUTTERFLY PATTERN*********** //
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n; i>=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }*/

    // *************FLOYD'S TRIANGLE********** //
    /*int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count <<" ";
            count++;
        }
        cout << endl;
    }*/

    // ***********HALF PYRAMID USING NUMBERS*********** //
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }*/

    // ***********HALF PYRAMID USING NUMBERS*********** //
    /*int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }*/

    // ***********HALF PYRAMID STAR ********* //
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout <<"*";
    //     }
    //     cout << endl;
    //}

    // **********HALF PYRAMID AFTER 180^0 ROTATION********** //
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }

    //     }
    //     cout << endl;
    // }

    // ************INVERTED HALF PYRAMID************ //
    // int n;
    // cout << "Take value of n that we want to print " << endl;
    // cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ************INVERTED HALF PYRAMID USING NUMBERS************ //
    /*int n;
    cout << "Take value of n that we want to print " << endl;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }*/

    // ************ HOLLOW RECTANGULAR PATTERN************* //
    /*int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }*/

    // *************PROGRAM OF RECTANGULAR PATTERN*************** //
    /*int rows, col;
    cout << "Enter rows and columns " << endl;
    cin >> rows >> col;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    return 0;
}