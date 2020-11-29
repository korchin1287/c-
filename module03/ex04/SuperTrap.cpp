#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name_g) : NinjaTrap(name_g), FragTrap(name_g) {
    hit_points = FragTrap::hit_points;
    max_hit_points = FragTrap::max_hit_points;
    energy_points = NinjaTrap::energy_points;
    max_hit_points = NinjaTrap::max_energy_points;
    level = 1;
    melee_attack_damage = NinjaTrap::melee_attack_damage;
    ranged_attack_damage = FragTrap::ranged_attack_damage;
    armor_damage_reduction = FragTrap::armor_damage_reduction;

    std::cout << "SuperTrap " << name_g << " was born!" << "\n";
}

SuperTrap::~SuperTrap() {
    std::cout << "Super " << name << " was destroyed!" << "\n";
}