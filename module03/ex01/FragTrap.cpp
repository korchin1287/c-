#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name_g)
    :
    name(name_g),
    hit_points(100),
    max_hit_points(100),
    energy_points(100),
    max_energy_points(100),
    level(1),
    melee_attack_damage(30),
    ranged_attack_damage(20),
    armor_damage_reduction(5) {
    std::cout << "FR4G-TP " << name_g << " was born!" << "\n";
}

FragTrap::~FragTrap() {
    std::cout << name << " was destroyed FR4G-TP!" << "\n";
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
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

FragTrap::FragTrap(const FragTrap &other) {
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

void FragTrap::rangedAttack(const std::string &target) {
    if (hit_points > 0) {
        if (energy_points >= 20) {
            std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing "
                      << ranged_attack_damage << " points of damage!" << "\n";
            energy_points -= 20;
            std::cout << "And lost " << 20 << " points of energy!" << "\n";
        } else
            std::cout << "FR4G-TP " << name << " doesn't have enough energy!" << "\n";
    }
    else
        std::cout << "FR4G-TP " << name << " already dead!" << "\n";
}

void FragTrap::meleeAttack(const std::string &target) {
    if (hit_points > 0) {
        if (energy_points >= 15) {
            std::cout << "FR4G-TP " << name << " attacks " << target << " at melee, causing "
                      << melee_attack_damage << " points of damage!" << "\n";
            energy_points -= 15;
            std::cout << "And lost " << 15 << " points of energy!" << "\n";
        } else
            std::cout << "FR4G-TP " << name << " doesn't have enough energy!" << "\n";
    }
    else
        std::cout << "FR4G-TP " << name << " already dead!" << "\n";

}

void FragTrap::takeDamage(unsigned int amount) {
    if (hit_points > 0) {
        if (hit_points + armor_damage_reduction - amount <= 0) {
            std::cout << "FR4G-TP " << name << " take "
                      << hit_points << " points of damage!" << "\n";
            hit_points = 0;
            delete this;
        } else {
            hit_points = hit_points + armor_damage_reduction - amount;
            std::cout << "FR4G-TP " << name << " take "
                      << amount - armor_damage_reduction << " points of damage and still live!" << "\n";
        }
    }
    else
        std::cout << "FR4G-TP " << name << " already dead!" << "\n";
}

void FragTrap::beRepaired(unsigned int amount) {
    if (hit_points > 0) {
        if ((unsigned int) hit_points + amount >= (unsigned int) max_hit_points) {
            level++;
            std::cout << "FR4G-TP " << name << " repaired "
                      << max_hit_points - hit_points << " points of health!" << "\n";
            hit_points = max_hit_points;
        } else {
            hit_points += amount;
            std::cout << "FR4G-TP " << name << " repaired "
                      << amount << " points of health!" << "\n";
        }
    }
    else
        std::cout << "FR4G-TP " << name << " already dead!" << "\n";
}

void   FragTrap::vaulthunter_dat_exe(const std::string &target) {
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
    }
    else
        std::cout << "FR4G-TP " << name << " already dead!" << "\n";
}