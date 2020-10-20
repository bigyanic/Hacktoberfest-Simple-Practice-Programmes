#include <iostream>

using namespace std;

int fibonacciNum(int n){
    if(n == 0){
        return 0;
    }else if (n == 1){
        return 1;
    }else{
        return fibonacciNum(n-1) + fibonacciNum(n-2);
    }
    
}
int main(){
    cout << "Which Fibonacci Number do you want? \n";
    int n;
    cin >> n;
    cout << fibonacciNum(n) << " ";
    return 0;
}

