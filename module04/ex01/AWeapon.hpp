#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {
private:
    std::string name;
    int apcost;
    int damage;
    AWeapon();
public:
    AWeapon(std::string const &name, int apcost, int damage);
    ~AWeapon();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    void attack() const = 0;
    AWeapon &operator=(const AWeapon &);
    AWeapon(const AWeapon &);
};


#endif
