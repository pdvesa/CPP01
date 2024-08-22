#include <HumanB.hpp>

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = nullptr;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if (!_weapon)
        return ;
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}