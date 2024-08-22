#include <Zombie.hpp>

int main(void)
{
    Zombie *z;

    randomChump("Undead gibbon");
    z = newZombie("Undead baboon");
    z->announce();
    delete z;
}