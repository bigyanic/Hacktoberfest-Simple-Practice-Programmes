void main() {
  print("Dart Your Coding!");

  // Addition
  int sumInt(int a, int b) {
    int c = a + b;
    return c;
  }

  // Subtraction
  int subInt(int a, int b) {
    int c = a - b;
    return c;
  }

  // Multiplication
  int mul(int a, int b) {
    int c = a * b;
    return c;
  }

  // Division
  double div(double a, double b) {
    double c = a / b;
    return c;
  }

  // Calling and printing the return values
  print("Sum: ${sumInt(5, 5)}");
  print("Subtraction: ${subInt(8, 3)}");
  print("Multiplication: ${mul(3, 5)}");
  print("Division: ${div(16, 8)}");
}
