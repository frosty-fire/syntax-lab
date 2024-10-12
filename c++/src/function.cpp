#include <iostream>

#include <function.h>
#include <valarray>

class Box {
    double width;

public:
    // Constructor Functions
    explicit Box(double w) : width(w) {
    }

    // Destructor Functions
    ~Box() = default;

    // Friend Functions
    friend void printWidth(Box box);

    // Static Functions
    static void helloFunction();
};

// Built-in Functions
double builtInFunction();

// User-defined Functions
int add(int a, int b);

// Inline Functions
inline int sub(int a, int b);

// Lambda Functions
auto lambdaFunction = [](int a, int b) -> int {
    return a + b;
};

// Template Functions
template<typename T>
T add_T(T a, T b);

void functionMain() {
    std::cout << "Square of 4: " << builtInFunction() << std::endl;
    std::cout << "Sum of two numbers: " << add(1, 2) << std::endl;
    std::cout << "Subtracting two numbers: " << sub(1, 2) << std::endl;
    Box box(10.5);
    printWidth(box);
    Box::helloFunction();
    std::cout << "Sum of two numbers: " << lambdaFunction(1, 2) << std::endl;

    std::cout << "Integer addition: " << add_T(5, 3) << std::endl;
    std::cout << "Double addition: " << add_T(5.5, 3.2) << std::endl;
    std::cout << "Float addition: " << add_T(2.3f, 4.1f) << std::endl;
}

// Built-in Functions
double builtInFunction() {
    return std::sqrt(4);
}

// User-defined Functions
int add(int a, int b) {
    return ++a + ++b;
}

// Inline Functions
int sub(int a, int b) {
    return --a - --b;
}

// Friend Functions
void printWidth(Box box) {
    // Accessing the private member 'width' of Box class
    std::cout << "Width of box: " << box.width << std::endl;
}

// Static Functions
void Box::helloFunction() {
    std::cout << "Hello Function World!" << std::endl;
}


// Template Functions
template<typename T>
T add_T(T a, T b) {
    return a + b;
}
