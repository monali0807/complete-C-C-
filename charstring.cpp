// *********************Replace space with @40 ******************
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    
    string tmp = "@40";
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            s.replace(i,1, tmp);
        }
    }
    cout<<s;
    
    return 0;
}*/



// **************Find maximum occuring character in an input string *******************
//#include<iostream>
//#include<vector>
//using namespace std;
// int getMaxOccCharacter(string s){
//     int arr[26]={0};
//     // create an array of count of character
//     for (int i = 0; i < s.length(); i++)
//     {
//        char ch = s[i];
//     //    lowercase
//     int number = 0;
//     number = ch - 'a';
//     arr[number]++;

//     }

//     //find max occ character
//     int maxi=-1, ans=0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (maxi < arr[i])
//         {
//            ans = i;
//            maxi = arr[i];
//         }
        
//     }
//     // char finalans = 'a' + ans;
//     return 'a' + ans;
    
    
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<getMaxOccCharacter(s)<<endl;
// }


// **************Reverse Words(with spaces) *******************
/*#include<iostream>
#include<cstring>
#include <algorithm>

using namespace std;

void reverse_words(char* s) {
  // Reverse the entire string
  int start = 0, end = strlen(s) - 1;
  while (start < end) {
    swap(s[start], s[end]);
    start++;
    end--;
  }

  // Reverse each word in the string
  start = 0;
  for (int current = 0; current < strlen(s); current++) {
    if (s[current] == ' ') {
      continue;
    }
    start = current;
    while (s[current] != ' ' && current < strlen(s)) {
      current++;
    }
    end = current - 1;
    while (start < end) {
      swap(s[start], s[end]);
      start++;
      end--;
    }
  }
}

int main(){

   char s[]= "THE SKY IS BLUE";
   //cin>>s;

   reverse_words(s);
   cout<<s;

   return 0;
}*/




// **************check (Remove extra character) reverse palindrome *******************
/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
private:
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
    
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        
        //faltu character hatado
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
        
    }
 };*/





// **************check palindrome *******************
/*#include<iostream>
using namespace std;
char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    int check;
    while(s<=e){
        if(toLowercase(a[s++]) != toLowercase(a[e--])){
            return 0;
        }
        else{
            s++;
            e--;
        }
        
    }
    return 1;
}
void reverse(char name[], int n){
    int s=0;
    int e = n-1;
    while (s<e) 
    {
       swap(name[s++], name[e--]);
    }
    
}
int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
       count++;
    }
    return count;
    
}
 int getMaxOccCharacter(string s){
    int arr[26]={0};
    // create an array of count of character
    for (int i = 0; i < s.length(); i++)
    {
       char ch = s[i];
    //    lowercase
    int number = 0;
    number = ch - 'a';
    arr[number]++;

    }

    //find max occ character
    int maxi=-1, ans=0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
           ans = i;
           maxi = arr[i];
        }
        
    }
    // char finalans = 'a' + ans;
    return 'a' + ans;
    
    
}
// int main()
// {
//     char name[20];
//     //cout<<"Enter your name :"<<endl;
//     cin>>name;
//     cout<<"Your name is :"<<name<<endl;
    
//     int len = getLength(name);
//     cout<<"Length of string is :"<< len <<endl;
//     //cout<<"Lenghth "<< len <<endl;
//     reverse(name, len);
//     cout<<"Your reverse name is :"<<name<<endl;

//     cout<<"Palindrome or not : "<<checkPalindrome(name, len);
//     return 0;
// }
int main(){
    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
}*/



// **************Reverse of string *************** 
/*#include<iostream>
using namespace std;
void reverse(char name[], int n){
    int s=0;
    int e = n-1;
    while (s<e) 
    {
       swap(name[s++], name[e--]);
    }
    
}
int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
       count++;
    }
    return count;
    
}
int main()
{
    char name[20];
    //cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Your name is :"<<name<<endl;
    
    int len = getLength(name);
    cout<<"Length of string is :"<< len <<endl;
    //cout<<"Lenghth "<< len <<endl;
    reverse(name, len);
    cout<<"Your reverse name is :"<<name<<endl;
    return 0;
}*/

// **************Length of string ***************
/*#include<iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
       count++;
    }
    return count;
    
}
int main()
{
    char name[20];
    cout<<"Enter your name :"<<endl;
    cin>>name;
    cout<<"Your name is :"<<name<<endl;
    cout<<"Length of string is :"<<getLength(name)<<endl;
    return 0;
}*/