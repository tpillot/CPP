#ifndef HUMANB_H
# define  HUMANB_H
# include <string>
# include "Weapon.hpp"

class HumanB {

private:

    Weapon*             _weapon = NULL;
    const std::string   _name;

public:

    HumanB(std::string name);

    void        setWeapon(Weapon& weapon);    
    void        attack(void) const;
    Weapon*     getW(void);
        
};

#endif
