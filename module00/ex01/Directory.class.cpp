#include "Directory.class.hpp"

void    Directory::add_contact(size_t index) {
    
    this->_contact[index].set_info(index);
    
    std::cout << "Contact has been added" << std::endl;
    if (this->_contact_len < 8)
        this->_contact_len++;

}

void    Directory::display_directory(void) const {

    int      index;

    if (this->_contact_len == 0){
        std::cout << "PLease add a contact" << std::endl;
        return;
    }

    std::cout << "|     index|first name| last name|  nicknam|" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;

    for (size_t i = 0; i < this->_contact_len; i++) {
        this->_contact[i].display_info();
    }

    std::cout << "Index :"; 
    // std::getline(std::cin, index);
    std::cin >> index;
    if (index < 0 || index > 7) {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    this->_contact[index].display_search();
    
    return;
}
