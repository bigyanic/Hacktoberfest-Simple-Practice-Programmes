#include <iostream>
using namespace std;

class Calculator
    {
        public:
        float firstnum,lastnum,calcvalue;
        char op;

        int getdata()
            {
                cout << "Enter 1st Number:";
                cin >> firstnum;
                cout << "Enter the Operator(+,-,*,/),Press q to quit:";
                cin >> op;
            }
        int addition()
            {
                cout << "Enter 2nd Number:";
                cin >> lastnum;
                calcvalue = firstnum + lastnum;
                cout << "The Addition of " << firstnum << " and " << lastnum << " is " << calcvalue << endl;
            }
        
        int subtraction()
            {
                cout << "Enter 2nd Number:";
                cin >> lastnum;
                calcvalue = firstnum - lastnum;
                cout << "The Subtraction of " << firstnum << " and " << lastnum << " is " << calcvalue << endl;
            }
        
        int multiplication()
            {
                cout << "Enter 2nd Number:";
                cin >> lastnum;
                calcvalue = firstnum * lastnum;
                cout << "The Multiplication of " << firstnum << " and " << lastnum << " is " << calcvalue << endl;
            }
        
        int division()
            {
                cout << "Enter 2nd Number:";
                cin >> lastnum;
                calcvalue = firstnum / lastnum;
                cout << "The Division of " << firstnum << " and " << lastnum << " is " << calcvalue << endl;
            }
        int check_operator()
            {
                if (op== '+')
                    addition();
                else if (op == '-')
                    subtraction();
                else if (op == '*')
                    multiplication();
                else if (op == '/')
                    division();
                else if (op == 'q')
                    exit;
                else
                {    cout << "Enter Correct Operator."<<endl;
                    getdata();
                }
            }

    };


int main()
    {
        Calculator calc;
        calc.getdata();
        calc.check_operator();
    }
