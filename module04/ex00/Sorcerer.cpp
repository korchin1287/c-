#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(std::string name_g, std::string title_g) : name(name_g), title(title_g) {
    std::cout << name << ", " << title << ", is born!" << '\n';
}

Sorcerer::~Sorcerer() {
    std::cout << name << ", " << title << ", is dead." << " Consequences will never be the same!" << '\n';
}

std::string Sorcerer::introduce() const {
    return "I am " + name + ", " + title + ", and I like ponies!" + '\n';
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &other) {
    out << other.introduce();
    return out;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other) {
    std::cout << "Assignation operator called" << "\n";
    if (this == &other)
        return *this;
    name = other.name;
    title = other.title;
    return *this;
}

Sorcerer::Sorcerer(const Sorcerer &other) {
    std::cout << "Copy constructor called" << "\n";
    name = other.name;
    title = other.title;
}

void Sorcerer::polymorph(Victim const &other) const {
    other.getPolymorphed();
}