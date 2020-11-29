
#include <iostream>

class Fixed{
private:
    int     raw;
    static const int fix = 8;
public:
    Fixed();
    ~Fixed();
    Fixed& operator=(const Fixed&);
    Fixed(const Fixed&);
    int getRawBits(void) const;
    void setRawBits(int const raw1);
};