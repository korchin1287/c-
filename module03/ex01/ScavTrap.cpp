#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name_g)
        :
        name(name_g),
        hit_points(100),
        max_hit_points(100),
        energy_points(50),
        max_energy_points(50),
        level(1),
        melee_attack_damage(20),
        ranged_attack_damage(15),
        armor_damage_reduction(3) {
    std::cout << name_g << " was born SC4V-TP" << "\n";
}

ScavTrap::~ScavTrap() {
    std::cout << name << " was destroyed SC4V-TP!" << "\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "Assignation operator called" << "\n";
    if (this == &other)
        return *this;
    this->melee_attack_damage = other.melee_attack_damage;
    this->ranged_attack_damage = other.ranged_attack_damage;
    this->armor_damage_reduction = other.armor_damage_reduction;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->max_energy_points = other.max_energy_points;
    this->level = other.level;
    this->name = other.name;
    this->max_hit_points = other.max_hit_points;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
    std::cout << "Copy constructor called" << "\n";
    melee_attack_damage = other.melee_attack_damage;
    ranged_attack_damage = other.ranged_attack_damage;
    armor_damage_reduction = other.armor_damage_reduction;
    hit_points = other.hit_points;
    energy_points = other.energy_points;
    max_energy_points = other.max_energy_points;
    level = other.level;
    name = other.name;
    max_hit_points = other.max_hit_points;
}

void ScavTrap::rangedAttack(const std::string &target) {
    if (hit_points > 0) {
        if (energy_points >= 15) {
            std::cout << "SC4V-TP " << name << " attacks " << target << " at range, causing "
                      << ranged_attack_damage << " points of damage!" << "\n";
            energy_points -= 15;
            std::cout << "And lost " << 15 << " points of energy!" << "\n";
        } else
            std::cout << "SC4V-TP " << name << " doesn't have enough energy!" << "\n";
    } else
        std::cout << "SC4V-TP " << name << " already dead!" << "\n";
}

void ScavTrap::meleeAttack(const std::string &target) {
    if (hit_points > 0) {
        if (energy_points >= 10) {
            std::cout << "SC4V-TP " << name << " attacks " << target << " at melee, causing "
                      << melee_attack_damage << " points of damage!" << "\n";
            energy_points -= 10;
            std::cout << "And lost " << 10 << " points of energy!" << "\n";
        } else
            std::cout << "SC4V-TP " << name << " doesn't have enough energy!" << "\n";
    } else
        std::cout << "SC4V-TP " << name << " already dead!" << "\n";

}

void ScavTrap::takeDamage(unsigned int amount) {
    if (hit_points > 0) {
        if (hit_points + armor_damage_reduction - amount <= 0) {
            std::cout << "SC4V-TP " << name << " take "
                      << hit_points << " points of damage!" << "\n";
            hit_points = 0;
            delete this;
        } else {
            hit_points = hit_points + armor_damage_reduction - amount;
            std::cout << "SC4V-TP " << name << " take "
                      << amount - armor_damage_reduction << " points of damage and still live!" << "\n";
        }
    } else
        std::cout << "SC4V-TP " << name << " already dead!" << "\n";
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (hit_points > 0) {
        if ((unsigned int) hit_points + amount >= (unsigned int) max_hit_points) {
            level++;
            std::cout << "SC4V-TP " << name << " repaired "
                      << max_hit_points - hit_points << " points of health!" << "\n";
            hit_points = max_hit_points;
        } else {
            hit_points += amount;
            std::cout << "SC4V-TP " << name << " repaired "
                      << amount << " points of health!" << "\n";
        }
    } else
        std::cout << "SC4V-TP " << name << " already dead!" << "\n";
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