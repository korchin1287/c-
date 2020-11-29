#include "Fixed.hpp"

Fixed::Fixed() {
    raw = 0;
    std::cout << "Default constructor called" << "\n";
}

Fixed::Fixed(const int a) {
    fix = a * 256;
    std::cout << "Int constructor called" << "\n";
}

Fixed::Fixed(const float a) {
    fix = int(roundf(a * 256));
    std::cout << "Float constructor called" << "\n";
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Assignation operator called" << "\n";
    if (this == &other)
        return *this;
    this->fix = other.fix;
    this->raw = other.raw;
    return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &other) {
    out << other.toFloat();
    return out;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << "\n";
    *this = other;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << "\n";
}
int   Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << "\n";
    return raw;
}

void    Fixed::setRawBits(const int raw1) {
    raw = raw1;
}

float Fixed::toFloat() const {
    return fix / 256;
}

int Fixed::toInt() const {
    return fix / 256;
}