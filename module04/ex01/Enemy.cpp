#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
    : hp(hp), type(type) {

}

Enemy::~Enemy() {

}

int Enemy::getHP() const {
    return hp;
}

std::string Enemy::getType() const {
    return type;
}

Enemy & Enemy::operator=(const Enemy &other) {
    if (this == &other)
        return *this;
    hp = other.hp;
    type = other.type;
}

Enemy::Enemy(const Enemy &other) {
    hp = other.hp;
    type = other.type;
}