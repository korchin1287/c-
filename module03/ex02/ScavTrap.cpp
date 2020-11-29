#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name_g)
{
    name = name_g;
    hit_points = 100;
    max_hit_points = 100;
    energy_points = 50;
    max_energy_points = 50;
    level = 1;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
    std::cout << "SC4V-TP " << name_g << " was born!" << "\n";
}

ScavTrap::~ScavTrap() {
    std::cout << name << " was destroyed!" << "\n";
}

void ScavTrap::challengeNewcomer() {
    if (hit_points > 0) {
        std::string doing[5];

        doing[0] = "did a back flip";
        doing[1] = "farted...";
        doing[2] = "fell";
        doing[3] = "runs around in circles";
        doing[4] = "is sad";

        srand(time(NULL));
        std::cout << "SC4V-TP " << name << " " << doing[rand() % 5] << "!" << "\n";

    } else
        std::cout << "SC4V-TP " << name << " already dead!" << "\n";
}