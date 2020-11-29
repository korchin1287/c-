
#include <iostream>
#include <cmath>

class Fixed{
private:
    int     raw;
    float   fix;
public:
    Fixed();
    Fixed(const int a);
    Fixed(const float a);
    ~Fixed();
    Fixed& operator=(const Fixed&);
    Fixed(const Fixed&);
    int getRawBits(void) const;
    void setRawBits(int const raw1);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream &, const Fixed&);