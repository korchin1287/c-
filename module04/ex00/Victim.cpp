#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name_g) : name(name_g) {
    std::cout << "Some random victim called " << name << " just appeared!" << '\n';
}

Victim::~Victim() {
    std::cout << "Victim " << name << " just died for no apparent reason!" << '\n';
}

Victim &Victim::operator=(const Victim &other) {
    std::cout << "Assignation operator called" << '\n';
    if (this == &other)
        return *this;
    name = other.name;
    return *this;
}

Victim::Victim(const Victim &other) {
    std::cout << "Copy constructor called" << "\n";
    name = other.name;
}

std::string Victim::introduce() const {
    return "I'm " + name + " and I like otters!" + '\n';
}

void Victim::getPolymorphed() const {
    std::cout << name << " has been turned into a cute little sheep!" << '\n';
}

std::ostream &operator<<(std::ostream &out, const Victim &other) {
    out << other.introduce();
    return out;
}