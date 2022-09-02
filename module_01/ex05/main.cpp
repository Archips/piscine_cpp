#include "Harl.hpp"

int main(void) {

    Harl        harl;
    std::string level;

    while (1) {

        if (std::cin.eof()) {
            std::cout << "Exit.." << std::endl;
            return (1);
        }
        std::cout << "Enter your complain: ";
        std::getline(std::cin, level);
        if (level.compare("EXIT") == 0) {
            std::cout << "Exit.." << std::endl;
            return (0);
        }
        harl.complain(level);
    }
}