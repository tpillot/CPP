#include "Directory.class.hpp"

void    add_contact(size_t index) {

    if (this->_contact_len > 8) {
        std::cout << "Dirctory is full !!";
        return;
    }
    
    this->_contact[index].set_info(index);
    
    std::cout << "Contact has been added" << std::endl;
    this->_contact_len++;
}

void    display_directory(void) const {

    size_t index;

    std::cout << "|  index   |first name|last name | nickname |" << std::endl;
    std::cout << "---------------------------------------------";
    
    if (this->_contact_len == 0)
        return;

    for (int i = 0; i < this->_contact_len; i++) {
        this->contact[i].display_contact();
    }

    std::getline(std::cin, index);
    if ((int)index < 0 || (int)index > 7) {
        std::cout << "invalid index" << std::endl;
        return;
    }
    std::cout << this->contact[index]
