#include <iostream>

int main() {
    int i;
    int j=0;
    int sum = 0;
    std::cout << "Hello, World!!!" << std::endl;


    for (i = 0; i < 5; i++) {
        std::cout << i << std::endl;
        sum += i;
    }

    std::cout << sum << std::endl;
    
    
    while (j < 5) {
        std::cout << "hi" << std::endl;
        j++;
    }
    
    std::cout << "hi" << std::endl
        << "my name is "
        << "Psi" << std::endl;
    
    
    
    return 0;
}