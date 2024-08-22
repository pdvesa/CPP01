#include <Harl.hpp>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Again with these wrong inputs" << std::endl;
        return (EXIT_FAILURE);
    } 
    Harl harl;
    std::string arg(argv[1]);
    harl.complain(arg);
    return (EXIT_SUCCESS);
}