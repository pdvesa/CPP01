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

void Harl::complain(std::string level) {
    int i;
    i = stoi(level); //add error checks
    (this->*complainArray[i % 4])();
}