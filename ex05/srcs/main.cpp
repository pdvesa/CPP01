#include <Harl.hpp>

int main() {
    Harl        harl;
    std::string level;
    
    for (int i = 0; i < 10; i++) {
        level = std::to_string(i);
        harl.complain(level);
    }
}