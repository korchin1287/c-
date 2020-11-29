#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << "\n";
    raw = 0;
}

Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Assignation operator called" << "\n";
    if (this == &other)
        return *this;
    this->raw = other.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << "\n";
    this->raw = other.getRawBits();
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << "\n";
}
int   Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << "\n";
    return raw >> 8;
}

void    Fixed::setRawBits(const int raw1) {
    raw = raw1 << 8;
}