#include <iostream>

class FragTrap{
private:
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
    FragTrap();
    FragTrap(std::string name_g);
    ~FragTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    FragTrap& operator=(const FragTrap &);
    FragTrap(const FragTrap&);
    void vaulthunter_dat_exe(std::string const &target);
};