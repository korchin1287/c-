#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {
private:
    int hp;
    std::string type;
public:
    Enemy(int hp, std::string const &type);
    ~Enemy();
    std::string getType() const;
    int getHP() const;
    Enemy &operator=(const Enemy &);
    Enemy(const Enemy &);
    virtual void takeDamage(int);
};


#endif
