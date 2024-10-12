#include <iostream>

#include <function.h>
#include <valarray>

void builtInFunction();

void functionMain() {
    builtInFunction();
}

// Built-in Functions
void builtInFunction() {
    std::cout << "Square of 4:" << std::sqrt(4) << std::endl;
}

// Template Functions

template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function


