#include <Zombie.hpp>

void Zombie::announce(void)
{
    std::cout << _name <<  ": BraiiiiiiinnnzzzZ... " << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
     std::cout << _name << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}

Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *zombieHorde;
    
    if (N <= 0)
        std::cout << "You don't understand the meaning of Horde" << std::endl;
    else if (N < 10)
        std::cout << "Still not a REAL Horde, anyways..." << std::endl;
    zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombieHorde[i].setName(name);
    return (zombieHorde);
}