#include <Karen.hpp>

void Karen::debug(void) {
    std::cout << "I hate debugging" << std::endl;
}

void Karen::info(void) {
    std::cout << "I hate info even more" << std::endl;
}

void Karen::warning(void) {
    std::cout << "I hate warnings the most" << std::endl;
}

void Karen::error(void) {
    std::cout << "I can't even comprehend how much I hate errors" << std::endl;
}

void Karen::complain(std::string level) {
    int i;
    i = stoi(level); //add error checks
    (this->*complainArray[i % 4])();
}