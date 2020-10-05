import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        // Your code here!
        
        Scanner sc = new Scanner(System.in);
       System.out.println("Enter the first number..");

    //    Taking first number as a input

        float a = sc.nextFloat();

      System.out.println("Enter the second number..");
       
        //   Taking second number as a input

        float b = sc.nextFloat();

        sc.nextLine();
        System.out.println("Enter the operation..");
        char operation = sc.nextLine().charAt(0);
        
    //    Storing result 

        float result = 0;

        switch(operation){
            case '+':
                result = a+b;
                break;
                case '-':
                    result = a-b;
                    break;
                    case '*':
                    result = a*b;
                    break;
                    case '/':
                        result = a/b;
                        
                    default:
                    System.out.println("Invalid Operation");
        }
        System.out.println(result);
    }
}
