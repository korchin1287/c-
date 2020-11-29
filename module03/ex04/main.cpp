#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"


int main()
{
    ClapTrap clapTrap;
    FragTrap f1("Boris");
    FragTrap f2("Nikolay");
    FragTrap f3("Roman");
    ScavTrap s1("Enot");
    NinjaTrap ninja("Jack-Chan");
    SuperTrap superTrap("Anton");

    superTrap.meleeAttack("Roman");
    superTrap.rangedAttack("Nikolay");
    superTrap.ninjaShoebox(f2);
    superTrap.vaulthunter_dat_exe("Jack-Chan");
    ninja.ninjaShoebox(f1);
    ninja.ninjaShoebox(s1);
    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(clapTrap);
    f1.rangedAttack("Nickolay");
    f2.takeDamage(20);
    f1.meleeAttack("Roman");
    f3.takeDamage(30);
    f2.beRepaired(20);
    s1.challengeNewcomer();
    f1.vaulthunter_dat_exe("Nickolay");

    return (0);
}