#include<iostream>
using namespace std;
void checkForPlaindrome(string s ) {
        int l = s.size();
        int sum1 = 0;
        int sum2 = 0;
        for(int x = 0; x < l / 2; ++x) {
            sum1 += (int)s[x];
            sum2 += (int)s[(l - 1) - x];
        }
        if(sum1 == sum2) 
            cout << "Yes, " << s << " is a palindrome" << "\n";
        else 
            cout << "No, " << " is not a palindrome"  << "\n";
}
int main() {
    cout << "Write some word: " << "\n";
    string s; cin >> s;
    checkForPlaindrome(s);
}

