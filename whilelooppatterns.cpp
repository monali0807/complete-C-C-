



/*
if n=4
output=    1
          23
         456
        78910
*/
//  #include <iostream>
//   using namespace std;
//  int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         int count=1;
//         while (i <= n)
//         {
//                 int space = n-i;
//                 while (space)
//                 {
//                         cout << " "<<" ";
//                         space--;
//                 }
//                 int j = 1;
//                 while (j <= i)
//                 {
//                         cout <<count<<" ";
//                         count++;
//                         j++;
//                 }

//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= 1 2 3 4
          2 3 4
            3 4
              4
*/
// #include <iostream>
//  using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         while (i <= n)
//         {
//                 int space = i-1;
//                 while (space)
//                 {
//                         cout << " ";
//                         space--;
//                 }
//                 int j = i;
//                 while (j <= n)
//                 {
//                         cout <<j;
//                         j++;
//                 }

//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output=    1
          22
         333
        4444
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         while (i <= n)
//         {
//                 int space = n-i;
//                 while (space)
//                 {
//                         cout << " ";
//                         space--;
//                 }
//                 int j = 1;
//                 while (j <= i)
//                 {
//                         cout <<i;
//                         j++;
//                 }

//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= 1 1 1 1
          2 2 2
            3 3
              4
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         while (i <= n)
//         {
//                 int space = i-1;
//                 while (space)
//                 {
//                         cout << " ";
//                         space--;
//                 }
//                 int j = 1;
//                 while (j <= n-i+1)
//                 {
//                         cout <<i<<" ";
//                         j++;
//                 }

//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= ****
         ***
          **
           *
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         while (i <= n)
//         {
//                 int space = i-1;
//                 while (space)
//                 {
//                         cout << " ";
//                         space--;
//                 }
//                 int j = 1;
//                 while (j <= n-i+1)
//                 {
//                         cout <<"*";
//                          j++;
//                 }

//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= ****
        ***
        **
        *
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;

//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <=  n - i + 1)
//                 {
//                         // int star = n - i + 1;
//                         cout << "*"
//                              << " ";
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output=    *
          **
         ***
        ****
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         while (i <= n)
//         {
//                 int space = n-i;
//                 while (space)
//                 {
//                         cout << " ";
//                         space--;
//                 }
//                 int j = 1;
//                 while (j <= i)
//                 {
//                         cout << "*";
//                         j++;
//                 }

//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= D
        C D
        B C D
        A B C D
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;

//         while (i <= n)
//         {
//                 int j = 1;
//                 char value = 'A'+n-i;
//                 while (j <= i)
//                 {

//                         cout << value<<" ";
//                         value++;
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= A
        B C
        D E F
        G H I J
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         char value = 'A';
//         while (i <= n)
//         {
//                 int j = 1;

//                 while (j <= i)
//                 {
//                         cout << value;
//                         value++;
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }
/*
if n=4
output= A
        B C
        C D E
        D E F G
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;

//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <= i)
//                 {
//                         char start = 'A' + i + j - 2;
//                         cout << start << " ";
//                         start++;
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }
//         return 0;
// }

/*
if n=4
output= A
        B B
        C C C
        D D D D
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;

//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <= i)
//                 {
//                         char start = 'A' + i - 1;
//                         cout << start << " ";
//                         start++;
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

// /*
// if n=4
// output= A B C D
//         B C D E
//         C D E F
//         D E F G
// */
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;

//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <= n)
//                 {
//                         char start = 'A' + i + j - 2;
//                         cout << start << " ";
//                         start++;
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }
//         return 0;
// }

/*
if n=4
output= A B C D
        E F G H
        I J K L
        M N O P
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         char start = 'A';
//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <= n)
//                 {
//                         cout << start << " ";
//                         start++;
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }
//         return 0;
// }

/*
if n=4
output= A B C D
        A B C D
        A B C D
        A B C D

*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;

//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <= n)
//                 {
//                         char ch = 'A' + j - 1;
//                         cout << ch << " ";
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= A A A A
        B B B B
        C C C C
        D D D D

*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;

//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <= n)
//                 {
//                         char ch = 'A' + i - 1;
//                         cout << ch << " ";
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= 1
        2 1
        3 2 1
        4 3 2 1
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <= i)
//                 {
//                         cout << i - j + 1<<" ";
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }
//         return 0;
// }

/* ********************method 1******************
if n=4
output= 1
        2 3
        3 4 5
        4 5 6 7
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;

//         int i = 1;
//         while (i <= n)
//         {
//                 int j = 1;
//                 while (j <= i)
//                 {
//                         cout << i + j - 1 << " ";
//                         j = j + 1;
//                 }
//                 cout << endl;
//                 i = i + 1;
//         }
//         return 0;
// }

/* *****************method 2***********************
if n=4
output= 1
        2 3
        3 4 5
        4 5 6 7
*/
// #include<iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;

//         int i = 1;
//         while (i <= n)
//         {
//                 int j = i;
//                 while (j < 2 * i)
//                 {
//                         cout << j << " ";
//                         j = j + 1;
//                 }
//                 cout << endl;
//                 i = i + 1;
//         }
//         return 0;
// }

/* ********************method 3 *************************
if n=5
output= 1
        2 3
        3 4 5
        4 5 6 7
        5 6 7 8 9
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//         int n;
//         cin >> n;
//         int i = 1;
//         int value = i;
//         while (i <= n)
//         {
//                 int j = 1;
//                 int value = i;
//                 while (j <= i)
//                 {
//                         cout << value <<" ";
//                         value++;
//                         j++;
//                 }
//                 cout << endl;
//                 i++;
//         }

//         return 0;
// }

/*
if n=4
output= 1
        2 3
        4 5 6
        7 8 9 10
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

/*
if n=4
output= 1
        2 2
        3 3 3
        4 4 4 4
*/
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while(j<=i){
//             cout<<i<<" ";
//             j++;
//         }cout<<endl;
//         i++;

//     }

//     return 0;
// }

/*
if n=3
output= 1 2 3
        4 5 6
        7 8 9
*/
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     int count=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<count<<" ";
//             count++;
//             j++;
//         }cout<<endl;
//         i++;

//     }

//     return 0;
// }

/*
if n=4
output= *
        * *
        * * *
        * * * *

*/
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }

//     return 0;
// }

/*
if n=3
output= 3 2 1
        3 2 1
        3 2 1
        use formula n-j+1
                    3-1+1=3
                    3-2+1=2
                    3-3+1=1
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << n - j + 1 << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

/*
if n=3
output= 1 2 3
        1 2 3
        1 2 3
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

/*
if n=3
output= 1 1 1
        2 2 2
        3 3 3
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << i<<" ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

/* if n=3
output= * * *
        * * *
        * * *
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << "*"<<" ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }