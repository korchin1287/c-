#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
private:
    NinjaTrap();
public:
    NinjaTrap(std::string name_g);
    ~NinjaTrap();

    void ninjaShoebox(const FragTrap &);
    void ninjaShoebox(const ScavTrap &);
    void ninjaShoebox(const NinjaTrap &);
    void ninjaShoebox(const ClapTrap &);
};

#endif