class BinaryTree{
  int arr[];
  int count;
  BinaryTree(){
    arr = new int[30];
    arr[0] = -1;
    count = 0;
  }
  void addRoot(int data){
    arr[0] = data;
    count++;
  }
  void addLeft(int data, int parent){
    arr[2*parent + 1] = data;
    count++;
  }
  void addRight(int data, int parent){
    arr[2*parent + 2] = data;
    count++;
  }
  void traverse(){
    if(arr[0] == -1)
      System.out.println("No elements to traverse");
    else{
      for(int i=0; i<count; i++){
        System.out.println(arr[i]);
      }
    }
  }
}
public class binary_tree_using_array{
  public static void main(String...args){
    BinaryTree t = new BinaryTree();
    t.addRoot(1);
    t.addLeft(2,0);
    t.addRight(3,0);
    t.addLeft(4,1);
    t.addRight(5,1);
    
    t.traverse();
  }
}
