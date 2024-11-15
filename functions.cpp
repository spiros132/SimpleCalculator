/* Functions */
#include "functions.hpp"
#include <iostream>
#include <limits>

int getIntInput() {
    int i;
    
    std::cin >> i;

    while(1) {
        if(!std::cin) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
            std::cout << "Something went wrong, please try again!" << std::endl;

            std::cin >> i;
        }

        if(std::cin)
            break;
    }

    return i;
}

double getDoubleInput() {
    double d;
    
    std::cin >> d;

    while(1) {
        if(!std::cin) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
            std::cout << "Something went wrong, please try again!" << std::endl;

            std::cin >> d;
        }

        if(std::cin)
            break;
    }

    return d;
}

std::string getStringInput() {
    std::string s;
    std::cin >> s;
    return s;
}


void print(std::string text) {
    std::cout << text << "\n";
}