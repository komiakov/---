#include <iostream>
#include <iomanip>

int main() {
    float a, b, result;
    char operation;

    while (true)
    {
        std::cout << "Enter first number: ";
        std::cin >> a;

        std::cout << "Enter second number: ";
        std::cin >> b;

        std::cout << "Enter operation (+ - * /): ";
        std::cin >> operation;

        if(operation == '+') {
            result = a + b;
        } else if (operation == '-') {
            result = a - b;
        } else if (operation == '*') {
            result = a * b;
        } else if (operation == '/') {
            if (b==0){
                std::cout << "Cannot divide by zero" << std::endl;
                continue;
            } else {
                result = a / b;
            }
        } else {
            std::cout << "Invalid operation" << std::endl;
            continue;
        }


        std::cout << std::setprecision(3);
        std::cout << "Result = " << result << std::endl;

        char repeat;
        std::cout << "Repeat? (Y/N): ";
        std::cin >> repeat;
        if(repeat != 'Y'){
            break;
        }
    }
    
    
}