#include <iostream>


void square_f(int arg);

int main() {
    
    int i;
    int user_input;
    std::cout << "������ ��?" << std::endl;
    std::cin >> user_input;

    square_f(user_input);

    return 0;
}

void square_f(int arg) {
    std::cout << arg * arg << std::endl;
}