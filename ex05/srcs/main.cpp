#include <Harl.hpp>

int main() {
    Harl        harl;
    std::string level[4]{"DEBUG", "INFO", "WARNING", "ERROR"};
    
    harl.complain(level[0]);
    harl.complain(level[1]);
    harl.complain(level[2]);
    harl.complain(level[3]);
}
