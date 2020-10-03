import java.util.InputMismatchException;
import java.util.Scanner;

public class ValidateEvenOdd {
    public static void main(String[] args) {
        System.out.println("Enter a number to check");
        try {
            Scanner scanner = new Scanner(System.in);
            int number = scanner.nextInt();

            System.out.println(isEven(number) ? number + " is an even number" : number + " is a odd number");
        }catch (InputMismatchException e) {
            System.out.println("Input type mismatch, Please enter an integer");
        }
    }

    private static boolean isEven(int number) {
        return number % 2 == 0;
    }
}
