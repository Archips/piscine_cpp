#include "Harl.hpp"

int main(int ac, char **av) {

    Harl        harl;
    std::string level;

    if (ac != 2) {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    level = av[1];
    harl.complain(level);
    return (0);
}
