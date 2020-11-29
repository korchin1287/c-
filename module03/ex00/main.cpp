#include "FragTrap.hpp"

int main()
{
    FragTrap *f1 = new FragTrap("Boris");
    FragTrap *f2 = new FragTrap("Nikolay");
    FragTrap *f3 = new FragTrap("Roman");


    f1->rangedAttack("Nikolay");
    f2->takeDamage(20);
    f1->meleeAttack("Roman");
    f3->takeDamage(30);
    f2->beRepaired(20);
    f3->vaulthunter_dat_exe("Boris");

    return (0);
}