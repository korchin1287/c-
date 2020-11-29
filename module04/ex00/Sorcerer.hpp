#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <cctype>
# include <clocale>
# include "Victim.hpp"

class Sorcerer {
private:
    std::string name;
    std::string title;

    Sorcerer();

public:
    Sorcerer(std::string name_g, std::string title_g);

    ~Sorcerer();

    std::string introduce() const;

    Sorcerer &operator=(const Sorcerer &);

    Sorcerer(const Sorcerer &);

    void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &, const Sorcerer &);

#endif