#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
    : name(name), apcost(apcost), damage(damage) {

}

AWeapon::~AWeapon(){

}

std::string AWeapon::getName() const {
    return name;
}

int AWeapon::getAPCost() const {
    return apcost;
}

int AWeapon::getDamage() const {
    return damage;
}

AWeapon & AWeapon::operator=(const AWeapon &other) {
    if (this == &other)
        return *this;
    name = other.name;
    apcost = other.apcost;
    damage = other.damage;
    return *this;
}

AWeapon::AWeapon(const AWeapon &other) {
    name = other.name;
    apcost = other.apcost;
    damage = other.damage;
}
