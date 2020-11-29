#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    ScavTrap(std::string name_g);
    ~ScavTrap();
    void challengeNewcomer();
};

#endif
