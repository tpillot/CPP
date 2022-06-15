#include "Contact.class.hpp"

std::string     Contact::_fields_names[6] = {
                "first_name",
                "last_name",
                "nick_name",
                "phone_number",
                "email",
                "darkest_secret",
};

void            Contact::set_info(size_t index) {
    
    this->_index = index;

    for (size_t i = 0; i < this->_info_len; i++) {
        std::cout << Contact::_fields_names[i] << ":";
        std::getline(std::cin, this->_info[i]);
        
        if (this->_info[i].empty()) {
            std::cout << Contact::_fields_names[i] << " is empty" << std::endl;
            i--;
        }
    }
}

void            Contact::display_info(void) const {
    
    int     len;
    
    std::cout << "|" << std::setw(10) << this->_index ;
    
    for (size_t i = 0; i < 3; i++) {

        len = this->_info[i].size();
        // std::cout << width;
        if (len > 10) {
            std::cout << "|" << this->_info[i].substr(0,9) << ".";
        }
        else {
            std::cout << "|" << std::setw(10) << this->_info[i];
        }
    }
    std::cout << "|" << std::endl;
    
    return;
}

void            Contact::display_search(void) const {

    std::cout << "Index: " << this->_index << std::endl;
    for (size_t i = 0; i < this->_info_len; i++) {
        std::cout << Contact::_fields_names[i] << this->_info[i] << std::endl;
    }

}