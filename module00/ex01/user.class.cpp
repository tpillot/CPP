#include "user.class.hpp"

size_t  user::get_index(void) const {
    return this->_index;
}

char    *user::get_first_name(void) const {
    return this->_first_name;
}    

char    *user::get_last_name(void) const {
    return this->_last_name;
}

char    *user::get_nick_name(void) const {
    return this->_nick_name;
}

char    *user::get_phone_number(void) const {
    return this->_phone_number;
}
