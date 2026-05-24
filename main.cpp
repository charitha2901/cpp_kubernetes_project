#include <iostream>
#include "src/calculator.h"

int main() {

    Calculator calc;
    int choice;

    while (true) {
        std::cout << "\n1. Add\n2. Exit\nEnter choice: ";
        std::cin >> choice;

        if (choice == 2) {
            std::cout << "Exiting...\n";
            break;
        }

        if (choice == 1) {
            int a, b;
            std::cout << "Enter two numbers: ";
            std::cin >> a >> b;

            std::cout << "Result: " << calc.add(a, b) << std::endl;
        }
    }

    return 0;
}
