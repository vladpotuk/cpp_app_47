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

    std::cout << "¬вед≥ть гральну карту (наприклад, '2H' дл€ дв≥йки черв , '2P' дл€ дв≥йки п≥к, ≥  так дал≥): ";
    std::cin >> card;

    printCard(card);

    return 0;
}
