#include <iostream>

int main() {
    std::cout << "Please enter two numbers:";
    int first;
    int second;
    std::cin >> first;
    std::cin >> second;
    std::cout << std::endl;
    std::cout << "The bigger one is:" << (first > second ? first : second);
    return 0;
}