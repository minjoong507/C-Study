#include <iostream>


void change_num(int *arg);

int main() {
    
    int i=5;
    std::cout << "���� ���� :" << i << std::endl;
    change_num(&i);
    std::cout << "�ٲ� ����"

    return 0;
}

void change_num(int *arg) {
    *arg = 3;

}