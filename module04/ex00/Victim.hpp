#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <cctype>
# include <clocale>

class Victim {
protected:
    std::string name;
private:
    Victim();

public:
    Victim(std::string name_g);

    ~Victim();

    std::string introduce() const;

    Victim &operator=(const Victim &);

    Victim(const Victim &);

    void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &, const Victim &);

#endif