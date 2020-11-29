#include "Peon.hpp"

Peon::Peon(std::string name_g) : Victim(name_g) {
    Victim::name = name_g;
    std::cout << "Zog zog." << '\n';
}

Peon::~Peon() {
    std::cout << "Bleuark..." << '\n';
}

void Peon::getPolymorphed() const {
    std::cout << name << " has been turned into a pink pony!" << '\n';
}

std::ostream &operator<<(std::ostream &out, const Peon &other) {
    out << other.introduce();
    return out;
}