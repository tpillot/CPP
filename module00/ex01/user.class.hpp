#ifndef USER_CLASS_H
# define  USER_CLASS_H
# include <string>

class user {

public:

    std::string     get_first_name(void) const;
    std::string     get_last_name(void) const;
    std::string     get_nick_name(void) const;
    std::string     get_phone_number(void) const;
    size_t          get_index(void) const;
    
private:

    size_t          _index;
    std::string     _first_name;
    std::string     _last_name;
    std::string     _nick_name;
    std::string     _phone_number;
    std::string     _darkest_secret;

};

#endif
