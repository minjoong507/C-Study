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
    std::cout << "���ڸ� �Է��غ�����:" << std::endl;
    
    while (1) {
        std::cout << "�Է�" << std::endl;
        std::cin >> user_input;
        if (lucky_num == user_input) {
            std::cout << "�¾ҽ��ϴ�!" << std::endl;
            break;
        }
        else {
            std::cout << "�ٽ� �Է��غ�����~" << std::endl;
        }
    }

  







    return 0;
}