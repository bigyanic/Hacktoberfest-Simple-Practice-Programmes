#include<bits/stdc++.h>
using namespace std;
struct Node
{int data;
Node *left,*right;}
void printlevelOrder(Node *root)
{if(root==NULL)
  return;
  queue<Node*>q;
  q.push(root);
  while(q.empty()==false)
  {Node *node=q.front();
  cout<<node->data<<" ";
  q.pop();
  if(node->left!=NULL)
  q.push(node->left);
  if(node->right!=NULL)
   q.push(node->right);}}
   int main()
   {Node *root=newNode(1);
   root->left=newNode(2);
   root->right=newNode(3);
   root->left->left=newNode(4);
   root->left->right=newNode(5);
   cout<<"Level Order Traversal of binary tree is\n";
   printLevelOrder(root);
   return 0;}
