#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main(){
    long long int n,t,m,r=0;
    cin>>n;
    t=n;
    while(t>0){
        m=1;
        r++;
        while(m<t){
            m<<=1;
        }
        if(t!=m){
           m>>=1;
        }
        t=n-m;
        n=t;
    }
    cout<<r<<endl;
    return 0;
}
