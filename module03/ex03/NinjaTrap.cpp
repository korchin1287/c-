#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name_g) {
    name = name_g;
    hit_points = 60;
    max_hit_points = 60;
    energy_points = 120;
    max_energy_points = 120;
    level = 1;
    melee_attack_damage = 60;
    ranged_attack_damage = 5;
    armor_damage_reduction = 0;
    std::cout << "FR4G-TP " << name_g << " was born!" << "\n";
}

NinjaTrap::~NinjaTrap() {
    std::cout << name << " was destroyed!" << "\n";
}

void NinjaTrap::ninjaShoebox(const FragTrap &other) {
    std::cout << "I'm " << name << " and I'll kill " << other.getName() << "\n";
}

void NinjaTrap::ninjaShoebox(const ScavTrap &other) {
    std::cout << "I'm " << name << " and I'll kill " << other.getName() << "\n";
}
void NinjaTrap::ninjaShoebox(const NinjaTrap &other) {
    std::cout << "I'm " << name << " and I'll kill " << other.getName() << "\n";
}
void NinjaTrap::ninjaShoebox(const ClapTrap &other) {
    std::cout << "I'm " << name << " and I'll kill " << other.getName() << "\n";
}
