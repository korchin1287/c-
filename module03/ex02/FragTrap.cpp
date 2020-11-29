#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_g) {
    name = name_g;
    hit_points = 100;
    max_hit_points = 100;
    energy_points = 100;
    max_energy_points = 100;
    level = 1;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    std::cout << "FR4G-TP " << name_g << " was born!" << "\n";
}

FragTrap::~FragTrap() {
    std::cout << name << " was destroyed!" << "\n";
}

void FragTrap::vaulthunter_dat_exe(const std::string &target) {
    int x;
    if (hit_points > 0) {
        if (energy_points >= 25) {
            std::string attacks[5];

            attacks[0] = "Stroke...";
            attacks[1] = "Push";
            attacks[2] = "Bite";
            attacks[3] = "Punch kick";
            attacks[4] = "Deadly hugs";

            srand(time(NULL));
            x = rand() % 5;
            std::cout << "FR4G-TP " << name << " attacks " << target << " "
                      << attacks[x] << ", causing " << x * 15 << " points of damage!" << "\n";
            energy_points -= 25;
            std::cout << "And lost " << 25 << " points of energy!" << "\n";
        } else
            std::cout << "FR4G-TP " << name << " doesn't have enough energy!" << "\n";
    } else
        std::cout << "FR4G-TP " << name << " already dead!" << "\n";
}