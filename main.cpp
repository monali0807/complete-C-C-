#include<iostream>
using namespace std;

int main()
{

  int n1,n2;
 char op;
cout<<"Enter 2 numbers: ";
cin>>n1>>n2;
cout<<"Enter operand: ";
cin>>op;
switch (op)
{
case '+':
cout<<n1+n2<<endl;
break;
case '-':
cout<<n1-n2<<endl;
break;
case '*':
cout<<n1*n2<<endl;
break;
case '/':
cout<<n1/n2<<endl;
break;
case '%':
cout<<n1%n2<<endl;
break;
default:
cout<<"Operator not found!"<<endl;
break;
}
    
    //CHECK WETHER THE NUMBER IS PRIME OR NOT
    /*int i, n = 0;
    cout << "\n\n Check whether a number is prime or not:\n";
	cout << "--------------------------------------------\n";
	cout << " Input a number to check prime or not: ";
	cin>>i;	
    for (int a = 1; a <= i; a++) 
    {
        if (i % a == 0) 
        {
            n++;
        }
    }
    if (n == 2) 
    {
        cout << " The entered number is a prime number. \n";
    }
    else {
        cout << " The number you entered is not a prime number. \n";
    }*/

    // FIND SUM OF N NATURAL NUMBERS
    /*int i, n, sum=0;
    cout<<"Find sum of n term natural numbers:" <<endl;
    cin>>n;
    cout<<"The n term natural numbers is :"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"The sum of n term natural numbers is "<<sum<<endl;*/


    // TO FIND SUM OF 1ST 10 NATURAL NUMBERS:
    /*int i, sum=0;
    cout<<"Find sum of first 10 natural numbers : "<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"The first 10 natural numbers are : "<<endl;
    for(int i=1; i<=10; i++)
    {
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"The sum of first 10 natural numbers is : "<<sum<<endl;
    */
    return 0;
}