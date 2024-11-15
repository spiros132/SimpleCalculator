#include <iostream>
#include "functions.hpp"

int main() {
    bool exit = false;
    while(1) {
        print("Simple Calculator written in C++\n"
        ":: ACTIONS ::\n"
        "Type 1 for Addition\n"
        "Type 2 for Subtraction\n"
        "Type 3 for Multiplication\n"
        "Type 4 for Division\n"
        "Type 0 to exit\n"
        );

        int i = getIntInput();

        if(i == 0)
            break;
        
        
        print("First Number:");
        double num1 = getDoubleInput();
        std::cout << std::endl;

        print("Second Number:");
        double num2 = getDoubleInput();
        std::cout << std::endl;

        double res;

        switch (i)
        {
            case 1:
                res = Add<double>(num1, num2);
                break;
            
            case 2:
                res = Subtract<double>(num1, num2);
                break;
            
            case 3:
                res = Multiply<double>(num1, num2);
                break;
            
            case 4:
                res = Divide<double>(num1, num2);
                break;

            default:
                res = 0;
                break;
        }

        std::cout << "The result is: " << res << std::endl;
        std::cout << std::endl;
    }

    return 0;
}