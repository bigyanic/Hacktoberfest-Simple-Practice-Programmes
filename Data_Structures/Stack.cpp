#include<bits/stdc++.h>
#define MAX 100
using namespace std;
class Stack{
  public:
    int top;
    int arr[MAX];
    Stack(){
      top=-1;
    }
    void push(int data){
      if(top == MAX){
        cout<<"Stack Overflow\n";
      }
      else{
        arr[++top] = data;
      }
    }
    int pop(){
      if(top<=-1){
        cout<<"Stack Underflow\n";
        return -1;
      }
      else{
        return arr[--top];
      }
    }
    int peek(){
      return arr[top];
    }
};
int main(){
  Stack s;
  s.push(2);
  s.push(3);
  cout<<s.peek()<<"\n";
  s.push(5);
  s.push(9);
  s.pop();
  cout<<s.peek()<<"\n";
  return 0;
}
