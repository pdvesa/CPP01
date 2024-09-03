#include <Harl.hpp>

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I hate debugging" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I hate info even more" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I hate warnings the most" << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "I can't even comprehend how much I hate errors" << std::endl;
}

void Harl::complain(std::string level) {
    int lvl;
    int i;
    
    lvl = static_cast<int>(level[0]);
    switch (lvl) {
        case 68: 
            i = 0;
            break;
        case 73:
            i = 1;
            break;
        case 87:
            i = 2;
            break;
        case 69:
            i = 3;
            break;
    }
    (this->*complainArray[i])();
}
