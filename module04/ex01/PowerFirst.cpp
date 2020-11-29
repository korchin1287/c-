#include "PowerFirst.hpp"

PowerFirst::PowerFirst() : AWeapon("Power First", 8, 50){

}

void PowerFirst::attack() const {
    std::cout << "* pschhh... SBAM! *" << '\n';
}