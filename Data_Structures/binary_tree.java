class Tree{
  class Queue{
    static final int capacity = 100;
    Node [] arr;
    int front, rear;
    Queue(){
      arr = new Node[capacity];
      front = rear = 0;
    }
    boolean enqueue(Node n1){
      if(rear == capacity){
        System.out.println("Queue is full");
        return false;
      }
      else{
        arr[rear++] = n1;
        return true;
      }
    }
    Node dequeue(){
      if(front==rear){
        System.out.println("Queue is empty");
        return null;
      }
      else{
        return arr[front++];
      }
    }
  }
  class Stack{
    static final int capacity = 100;
    Node [] arr;
    int top;
    Stack(){
      arr = new Node[capacity];
      top = -1;
    }
    boolean push(Node val){
      if(top >= capacity){
        System.out.println("Segemntation fault");
        return false;
      }
      arr[++top] = val;
      return true;
    }
    Node pop(){
      if(top == -1){
        return null;
      }
      else{
        return arr[top--];
      }
    }
    Node peek(){
      if(top == -1){
        return null;
      }
      else{
        return arr[top];
      }
    }
  }

  Node root;
  Node ptr1;
  Node prePtr;
  
  Stack S = new Stack();

  class Node{
    Node left, right;
    int data;
    Node(int d){
      this.data = d;
      this.left = null;
      this.right = null;
    }
  }
  void addNode(int val){
    Node n1 = new Node(val);
    n1.left = null;
    n1.right = null;

    if(root == null){
      root = n1;
    }
    else{
      //check root => left or right is null
      Node ptr = root;
      if(ptr.left == null || ptr.right == null){
        if(ptr.left ==null){
          ptr.left = n1;
        }
        else{
          ptr.right = n1;
        }
      }
      else{
        //BFS
        Queue q1 = new Queue();

        q1.enqueue(ptr.left);
        q1.enqueue(ptr.right);

        while(q1 != null){
          ptr = q1.dequeue();
          Node left = ptr.left;
          Node right = ptr.right;

          if(left != null){
            q1.enqueue(left);
          }
          if(right != null){
            q1.enqueue(right);
          }
          if(left == null || right == null){
            if(left==null){
              ptr.left = n1;
              break;
            }
            else{
              ptr.right = n1;
              break;
            }
          }
        }
      }
    }
  }
  Node traTop(){
    ptr1 = root;
    prePtr = ptr1;
    if(ptr1== null){
      System.out.println("No root element");
      return prePtr;
    }
    else if(ptr1.left == null && ptr1.right == null){
      System.out.println(ptr1.data);
      return prePtr;
    }
    else{
      traverse();
      return prePtr;
    }
  }
  void inorder(Node root){
    if(root==null)
        return;
    inorder(root.left);
    System.out.print(root.data+", ");
    inorder(root.right);
  }
  void preorder(Node root){
    if(root==null)
        return;
    System.out.print(root.data+", ");
    inorder(root.left);
    inorder(root.right);
  }
  void postorder(Node root){
    if(root==null)
        return;
    inorder(root.left);
    inorder(root.right);
    System.out.print(root.data+", ");
  }
  Node traverse(){
    //System.out.println("Root infor: "+root.data+" L: "+root.left+" R: "+root.right);

    while(ptr1!= null){
      if(ptr1.right != null){
        S.push(ptr1.right);
      }
      System.out.print(" => "+ptr1.data);
      prePtr = ptr1;
      ptr1 = ptr1.left;
    }

    while(S.peek() != null){
      Node crst = S.peek();
      ptr1 = S.pop();
      traverse();
    }
    return prePtr;

  }
}
public class binary_tree{
  public static void main(String...args){
    Tree t1 = new Tree();
    t1.addNode(1);
    t1.addNode(2);
    t1.addNode(3);
    t1.addNode(4);
    t1.addNode(5);
    t1.addNode(6);
    t1.addNode(7);
    t1.addNode(8);
    t1.addNode(9);
    //t1.traTop();
    t1.traTop();
    System.out.println("\n");
    System.out.println("INORDER");
    t1.inorder(t1.root);
    System.out.println("\n\nPRE-ORDER");
    t1.preorder(t1.root);
    System.out.println("\n\nPOST-ORDER");
    t1.postorder(t1.root);
    System.out.println();
    //System.out.println("Last node: "+t1.traTop());
  }
}
