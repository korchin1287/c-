#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap was born!" << "\n";
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap was destroyed!" << "\n";
}

std::string ClapTrap::getName() const{
    return name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
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

ClapTrap::ClapTrap(const ClapTrap &other) {
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

void ClapTrap::rangedAttack(const std::string &target) {
    if (hit_points > 0) {
        if (energy_points >= 20) {
            std::cout << name << " attacks " << target << " at range, causing "
                      << ranged_attack_damage << " points of damage!" << "\n";
            energy_points -= 20;
            std::cout << "And lost " << 20 << " points of energy!" << "\n";
        } else
            std::cout << name << " doesn't have enough energy!" << "\n";
    } else
        std::cout << name << " already dead!" << "\n";
}

void ClapTrap::meleeAttack(const std::string &target) {
    if (hit_points > 0) {
        if (energy_points >= 15) {
            std::cout << name << " attacks " << target << " at melee, causing "
                      << melee_attack_damage << " points of damage!" << "\n";
            energy_points -= 15;
            std::cout << "And lost " << 15 << " points of energy!" << "\n";
        } else
            std::cout << name << " doesn't have enough energy!" << "\n";
    } else
        std::cout << name << " already dead!" << "\n";

}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hit_points > 0) {
        if (hit_points + armor_damage_reduction - amount <= 0) {
            std::cout << name << " take "
                      << hit_points << " points of damage!" << "\n";
            hit_points = 0;
            delete this;
        } else {
            hit_points = hit_points + armor_damage_reduction - amount;
            std::cout << name << " take "
                      << amount - armor_damage_reduction << " points of damage and still live!" << "\n";
        }
    } else
        std::cout << name << " already dead!" << "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hit_points > 0) {
        if ((unsigned int) hit_points + amount >= (unsigned int) max_hit_points) {
            level++;
            std::cout << name << " repaired "
                      << max_hit_points - hit_points << " points of health!" << "\n";
            hit_points = max_hit_points;
        } else {
            hit_points += amount;
            std::cout << name << " repaired "
                      << amount << " points of health!" << "\n";
        }
    } else
        std::cout << name << " already dead!" << "\n";
}