#include <iostream>


void change_num(int *arg);

int main() {
    
    int i=5;
    std::cout << "원래 숫자 :" << i << std::endl;
    change_num(&i);
    std::cout << "바뀐 숫자"

    return 0;
}

void change_num(int *arg) {
    *arg = 3;

}