#include<iostream>
#include<cstring>
using namespace std;
int main
{
 char string1[100];
 int i,length;
 int flag=0;
 cout<<"enter a string: ";
 cin>>string1;
 length=strlen(string1);
 for(i=0;i<length;i++);
     {
     if(string1[i]!=string1[length-i-1])
     {
     flag=1;
     break;
     }
     }
    if(flag!=1)
    {
    cout<<"string is palindrome"<<endl;
    }
    else
    {
    cout<<"string is not palindrome"<<endl;
    }
    return 0;
}   
