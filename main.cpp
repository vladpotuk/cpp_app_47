#include "Func.h"


void printCard(const std::string& card) {
    std::cout << " ________ " << std::endl;
    std::cout << "|        |" << std::endl;
    std::cout << "|   " << card << "   |" << std::endl;
    std::cout << "|        |" << std::endl;
    std::cout << " -------- " << std::endl;
}

int main() {
    system("chcp 1251");
    system("cls");
    std::string card;

    std::cout << "������ ������� ����� (���������, '2H' ��� ����� ���� , '2P' ��� ����� ��, �  ��� ���): ";
    std::cin >> card;

    printCard(card);

    return 0;
}
