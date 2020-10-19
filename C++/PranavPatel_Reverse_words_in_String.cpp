/* 
LeetCode Problem 151 : https://leetcode.com/problems/reverse-words-in-a-string/

Problem :
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

*/

#include<bits/stdc++. h>
using namesapce std;

class Solution {
public:
    string reverseWords(string a) {
        int i=0,n;
        string st="";
        vector<string> wd;
        for(i=a.length()-1;i>=0;i--)
        {
            if(a[i]!=' ')
            {
                break;
            }
        }
        n=i+1;
        for(i=0;i<n;i++)
        {
            if(a[i]!=' ')
            {
                break;
            }
        }
        for(;i<n;i++)
        {
            if(a[i]==' ')
            {
                if(a[i-1]!=' ')
                {
                    wd.push_back(st);
                    st="";
                }
            }
            else
            {
                st+=a[i];
            }
        }
        wd.push_back(st);
        st="";
        for(i=wd.size()-1;i>=0;i--)
        {
            st+=wd[i];
            if(i!=0)
            {
                st+=" ";
            }
        }
        return st;
    }
};

int main()
{
  String s;
  cin>>s;
  cout<<reverseWords(s);
}
