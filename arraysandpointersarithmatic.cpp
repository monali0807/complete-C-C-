#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 56, 89};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    // cout<<marks[2]<<endl;
    cout << marks[3] << endl;

    marks[2] = 69;
    cout << marks[2] << endl;
    int mathmarks[4];
    mathmarks[0] = 123;
    mathmarks[1] = 234;
    mathmarks[2] = 132;
    mathmarks[3] = 198;
    cout << "These are mathmarks " << endl;
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value at marks "<<i<<" is "<<marks[i]<<endl;
    // }
    int i = 0;
    // do
    // {
    //     cout<<"The value at marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // } while (i<4);
    while (i < 4)
    {
        cout << "The value at marks " << i << " is " << marks[i] << endl;
        i++;
    }
    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}