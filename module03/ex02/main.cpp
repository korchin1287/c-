#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap f1("Boris");
    FragTrap f2("Nikolay");
    FragTrap f3("Roman");
    ScavTrap s1("Enot");

    f1.rangedAttack("Nickolay");
    f2.takeDamage(20);
    f1.meleeAttack("Roman");
    f3.takeDamage(30);
    f2.beRepaired(20);
    s1.challengeNewcomer();
    f1.vaulthunter_dat_exe("Nickolay");

    return (0);
}