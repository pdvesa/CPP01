#include <Zombie.hpp>

int main(void)
{
    Zombie      *aspiringHorde;
    int         N = 11;
    std::string name = "davidBaboon";
    
    aspiringHorde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        aspiringHorde[i].announce();
    delete[] aspiringHorde;
}