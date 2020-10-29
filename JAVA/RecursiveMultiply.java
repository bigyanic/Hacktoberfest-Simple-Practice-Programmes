import java.util.Scanner;

public class RecursiveMultiply {

  public static long result = 0L;
  public static long x = 0L;
  public static int count = 0;
  
  public static void main(final String[] args) {
  
      Scanner usrInput = new Scanner(System.in);
      System.out.println("Enter first and second number (separated by whitespace):");
      String stringNums = usrInput.nextLine();
      
      String[] stringNumList = stringNums.split(" ");
      int numOne = Integer.parseInt(stringNumList[0]);
      int numTwo = Integer.parseInt(stringNumList[1]);
      
      System.out.println(mult(numOne, numTwo));
      //System.out.println(mult(20000000, 20000000));
  }

  public static long mult(int a, int b){
     
     if(count == 0){
       x = (long) a;
        count++ ;
     }
       
    if( b <= 0 ){
      b = 0;
      
    } else if( b % 2 == 0 ){
      x = x << 1 ;
      b = b >> 1;

      return mult(a, b);
      
    } else{
      RecursiveMultiply.result = RecursiveMultiply.result + x;

      x = x << 1 ;
      b = b >> 1 ;

      return mult(a, b);
    }
    return RecursiveMultiply.result;
  }
}
