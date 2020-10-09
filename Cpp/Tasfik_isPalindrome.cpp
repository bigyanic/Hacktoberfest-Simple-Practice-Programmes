// *** This Template was created by Tasfik Rahman ***
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string text, int start, int end){
    if(start>=end){
        return true;
    }
    return text[start] == text[end] && isPalindrome(text,start+1,end-1);
}

int main()
{
    string text;
    cout<<"Enter the text: "<<endl;
    getline(cin,text);
    if(isPalindrome(text,0,text.size()-1)){
        cout<<text<<" is palindrome!!";
    }
    else{
        cout<<text<<" is not palindrome!!";
    }
return 0;
}