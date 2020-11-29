#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

private:
    FragTrap();
public:
    FragTrap(std::string name_g);
    ~FragTrap();

    void vaulthunter_dat_exe(std::string const &target);
};

#endif