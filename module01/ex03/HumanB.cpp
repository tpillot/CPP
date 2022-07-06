#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB(std::string name) : _name(name) {
    return;
}

void    HumanB::setWeapon(Weapon& weapon) {

    this->_weapon = &weapon;

    return; 
}

Weapon*    HumanB::getW(void) {
    return this->_weapon;
}

void    HumanB::attack(void) const {


    std::cout << this->_name << " attacks with their ";

    if (!this->_weapon)
        std::cout << "hands" << std::endl;
    else
        std::cout << this->_weapon->getType() << std::endl;

    return;
}