import java.util.Scanner;

public class BinaryToDecimal {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String binaryString = scanner.next();

        if (!binaryString.matches("[0-1]+")) {
            System.out.println(" Failed Input ");
            return;
        }

        int decimal=Integer.parseInt(binaryString,2);
        System.out.println(decimal);


    }

}
