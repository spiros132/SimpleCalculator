#pragma once
#include <string>
/* Functions Header */

int getIntInput();
double getDoubleInput();
std::string getStringInput();

template <typename T>
T Add(T t1, T t2) {
    return t1 + t2;
}

template <typename T>
T Subtract(T t1, T t2) {
    return t1 - t2;
}

template <typename T>
T Multiply(T t1, T t2) {
    return t1 * t2;
}

template <typename T>
T Divide(T t1, T t2) {
    return t1 / t2;
}

void print(std::string text);