#include <Harl.hpp>

void Harl::debug(void) {
    std::cout << "I hate debugging" << std::endl;
}

void Harl::info(void) {
    std::cout << "I hate info even more" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I hate warnings the most" << std::endl;
}

void Harl::error(void) {
    std::cout << "I can't even comprehend how much I hate errors" << std::endl;
}

void Harl::keepComplaining(int i) {
    for (int j = i; j < 4; j++)
        (this->*complainArray[j])();
}

void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    
    for (i = 0; i< 4; i++)
    {
        if (!level.compare(levels[i]))
            break;
    }
    switch (i) {
        case 0: 
            keepComplaining(i);
            break;
        case 1:
            keepComplaining(i);
            break;
        case 2:
            keepComplaining(i);
            break;
        case 3:
            keepComplaining(i);
            break;
        case 4:
            std::cout << "You failed again" << std::endl;
            return ;
    }
}

