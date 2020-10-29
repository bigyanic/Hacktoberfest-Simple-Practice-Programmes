import java.util.Scanner;

public class SquareRoot {
    static Scanner input = new Scanner(System.in);
    
    public static void main(String [] args){
        squareRoot();
    }
    
          public static void squareRoot(){
        System.out.println("Enter a number to get it's square root.");
        
        //  The num variable holds a number supplied by the user.
        int num = input.nextInt();
        
        //  The sqrt method of the Math class calculates the square root of a number.
        float squareRoot = (float)Math.sqrt(num);
        
        System.out.println("The sqaure root of " + num + " is " + squareRoot);
    }
}
