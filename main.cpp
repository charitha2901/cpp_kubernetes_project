#include <iostream>
#include "src/calculator.h"

int main() {

    Calculator calc;

    std::cout << "Addition: "
              << calc.add(10, 5)
              << std::endl;

    return 0;
}