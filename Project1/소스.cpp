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
    
    
    int lucky_num = 3;
    int user_input;
    std::cout << "숫자를 입력해보세용:" << std::endl;
    
    while (1) {
        std::cout << "입력" << std::endl;
        std::cin >> user_input;
        if (lucky_num == user_input) {
            std::cout << "맞았습니다!" << std::endl;
            break;
        }
        else {
            std::cout << "다시 입력해보세요~" << std::endl;
        }
    }

  







    return 0;
}