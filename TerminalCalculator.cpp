#include <iostream>
#include <cmath>

int main(){

    char op;
    double num1;
    double num2;
    double result;

std::cout << "************CALCULATOR************ \n";

    std::cout << "Enter either (+ - * / p) : ";
    std::cin >> op;

    std::cout << "Enter number 1:";
    std::cin >> num1;

    std::cout << "Enter number 2:";
    std::cin >> num2;

    switch(op){
    case '+':
         result = num1 + num2;
        std::cout << "RESULT:" << result << '\n';
        break;

    case '-':
         result = num1 - num2;
        std::cout << "RESULT:" << result << '\n';
        break;
    case '*':
         result = num1 * num2;
        std::cout << "RESULT:" << result << '\n';
        break;
    case '/':
         result = num1 / num2;
        std::cout << "RESULT:" << result << '\n';
        break;
    case 'p':
         result = pow(num1, num2);
         std::cout <<"RESULT:" << result << '\n';
         break;

    default:
            std::cout << "invalid response";
            break;
    }

std::cout << "************************************";
return 0;
}
