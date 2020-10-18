class Node{
  int data;
  Node prev, next;
  Node(){
    data = 0; prev = null; next = null;
  }
}
class doublyLL{
  Node head;
  doublyLL(){
    head = null;
  }
  void add(int data){
    Node newNode = new Node();
    newNode.data  = data;
    if(head==null){
      head = newNode;
    }
    else{
      Node ptr,pre;
      ptr = head;
      while(ptr.next != null){
        ptr = ptr.next;
      }
      newNode.prev = ptr;
      ptr.next = newNode;
    }
  }
  void traverse(){
    Node ptr = head;
    while(ptr!=null){
      if(ptr.prev == null)
        System.out.println("Head: "+ptr.data);
      else if(ptr.next==null)
        System.out.println("Tail: "+ptr.data);
      else
        System.out.println(ptr.prev.data+" --> "+ptr.data+" --> "+ptr.next.data);
      ptr = ptr.next;
    }
  }
}
public class doublyLinkedList{
  public static void main(String args[]){
    doublyLL l = new doublyLL();
    l.add(2);
    l.add(3);
    l.add(5);
    l.add(10);
    l.add(1);
    l.add(3);
    l.add(7);
    l.add(12);
    l.add(23);
    l.traverse();
  }
}
