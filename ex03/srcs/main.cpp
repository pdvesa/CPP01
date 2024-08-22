#include <HumanA.hpp>
#include <HumanB.hpp>

int	main(void)
{
	{
		Weapon club = Weapon("nightclub");
		HumanA sleepy = HumanA("Sleepy", club);

		sleepy.attack();
		club.setType("dayclub");
		sleepy.attack();
	}
	{
		Weapon club = Weapon("eveningclub");
		HumanB joe = HumanB("Joe");

		joe.setWeapon(club);
		joe.attack();
		club.setType("morningclub");
		joe.attack();
	}
	return (0);
}
