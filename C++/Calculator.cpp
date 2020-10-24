#include<iostream>
#include<cmath>
using namespace std;

double Add(double a, double b)
{
	return a + b;
}
double Subtract(double a, double b)
{
	return a - b;
}
double Divide(double a, double b)
{
	return a / b;
}
double Multiply(double a, double b)
{
	return a * b;
}
double takeMod(double a, double b)
{
	int c, d;
	c = int(a);
	d = int(b);
	return c % d;
}
double takePower(double a, double b)
{
	return pow(a, b);
}
double takeSquareRoot(double a)
{
	return sqrt(a);
}
double takeSin(double a)
{
	return sin(a);
}
double takeCos(double a)
{
	return cos(a);
}
double takeTan(double a)
{
	return tan(a);
}
int main()
{
	double a=0, b=0, op, ans = 0, rag;
	char choice;
	cout << "Enter   1 to Add\n\t2 to Subtract\n\t3 to Divide\n\t4 to Multiply\n\t5 to take Mod\n";
	cout << "\t6 to take Power a^b\n\t7 to take Square root of a\n\t8 to take sin of a\n\t9 to take cos of a\n\t10 to take tan of a";
	do
	{
		cout << "\nEnter operation: ";
		cin >> op;
		rag = op;
		if (rag <= 6)
		{
			cout << "Enter two input values: \n";
			cout << "Enter a: ";
			cin >> a;
			cout << "Enter b: ";
			cin >> b;
		}
		else if (rag >= 7 && rag <= 10)
		{
			cout << "Enter input value: \n";
			cout << "Enter a: ";
			cin >> a;
		}
		else
		{
			cout << "Invalid Input";
		}
		if (op == 1)
		{
			ans = Add(a, b);
		}
		else if (op == 2)
		{
			ans = Subtract(a, b);
		}
		else if (op == 3)
		{
			ans = Divide(a, b);
		}
		else if (op == 4)
		{
			ans = Multiply(a, b);
		}
		else if (op == 5)
		{
			ans = takeMod(a, b);
		}
		else if (op == 6)
		{
			ans = takePower(a, b);
		}
		else if (op == 7)
		{
			ans = takeSquareRoot(a);
		}
		else if (op == 8)
		{
			ans = takeSin(a);
		}
		else if (op == 9)
		{
			ans = takeCos(a);
		}
		else if (op == 10)
		{
			ans = takeTan(a);
		}
		else
		{
			return 0;
		}
		cout << "Answer: " << ans;
		cout << "\nEnter 'y' if you want to use the calculator again: ";
		cin >> choice;
	} while (choice == 'y');
	return 0;
}