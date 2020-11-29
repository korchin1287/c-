#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
# include <iostream>
# include <cctype>
# include <clocale>

class Peon : public Victim {
private:
    Peon();

public:
    Peon(std::string name_g);

    ~Peon();

    void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &, const Peon &);

#endif