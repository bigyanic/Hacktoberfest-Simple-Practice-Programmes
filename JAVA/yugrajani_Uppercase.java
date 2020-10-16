// Program to convert the given input string to uppercase.
// Instructions to compile and run the program:
// Step 1 - Compilation: 'javac yugrajani_Uppercase.java'
// Step 2 - Execution: 'java Uppercase'
// Step 3 - Provide appropriate input and observe the output


// This import is necessary for Scanner to read the input string from the user.
import java.util.*;

class Uppercase
{
	public static void main(String args[])
	{
		// Creating an object of Scanner class
		Scanner sc = new Scanner(System.in);

		// A simple message for the user
		System.out.println("Enter the string to be converted to uppercase: ");
		
		// nextLine() method reads the input string until the /n (ENTER) is encountered
		String str = sc.nextLine();

		// The string entered by the user is printed
		System.out.println("Input string: " + str);
		
		// The output string i.e. input string converted to uppercase.
		System.out.println("Output string (in uppercase): " + str.toUpperCase());

		// Note: In a similar manner, there exists a method toLowerCase() for converting the string to lower case.

		// Note: In Java, string is immutable. There are several reasons to explain the same:
		// 1. Existence of String Constant Pool
		// 2. Thread Safety
		// 3. Security
		// 4. Class Loading
		// 5. HashCode Caching
		// Read more about the reasons if interested.
	}
}