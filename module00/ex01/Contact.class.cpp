#include "user.class.hpp"

std::string     Contact::_fields_names[6] = {
                "first_name",
                "last_name",
                "nick_name",
                "phone_number",
                "email",
                "darkest_secret",
}

void            set_info(size_t index) {
    
    this->_index = index;
    
    
    for (i = 0; i < this->_info_len) {
        std::cout << Contact::_fields_names[i] << ":"
        std::getline(std::cin, this->_info[i]);
        
        if (!this->_info[i].empty())
            std::cout << Contact::_fields_names[i] << " is empty" << std::endl;
    }
}

void            display_info(void) const {
    return;
}