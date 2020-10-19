#include <iostream> 


int main(){
    short choice,num1,num2,result;

    std::cout << "Calculator" << std::endl;
    std::cout << "[1] Sum" << std::endl;
    std::cout << "[2] Substract" << std::endl;
    std::cout << "[3] Multiply" << std::endl;
    std::cout << "[4] Divide" << std::endl;

    std::cout << "Which operation do you want to perform?" << std::endl;
    std::cin >> choice;
    if(choice>0 && choice < 5){
        std::cout << "Introduce a number: " << std::endl;
        std::cin >> num1;
        std::cout << "Introduce another number: " << std::endl;
        std::cin >> num2;
    }

    switch (choice){
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if(num2 == 0){
                std::cout << "You cant divide by 0. Select another number:" << std::endl;
                std::cin >> num2;
            }
            result = num1/num2;
            break;


    }
    std::cout << "The result is: " << result << std::endl;
    return 0;
}