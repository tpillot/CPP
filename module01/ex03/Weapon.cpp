#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
    return;
}

const std::string&  Weapon::getType(void) const {

    const std::string&  rtype = this->_type;

    return rtype;

}


void                Weapon::setType(std::string type) {

    this->_type = type;

    return;

}