#include "HumanA.hpp"
#include <iostream>


HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
    return;
}

void    HumanA::attack(void) const {

    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    return;
}