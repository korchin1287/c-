#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
protected:
    std::string name;
    int hit_points;
    int max_hit_points;
    int energy_points;
    int max_energy_points;
    int level;
    int melee_attack_damage;
    int ranged_attack_damage;
    int armor_damage_reduction;
public:
    ClapTrap();

    ~ClapTrap();

    std::string getName() const;
    void rangedAttack(std::string const &target);

    void meleeAttack(std::string const &target);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);

    ClapTrap &operator=(const ClapTrap &);

    ClapTrap(const ClapTrap &);

};

#endif