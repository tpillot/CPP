#ifndef CONTACT_CLASS_H
# define  CONTACT_CLASS_H
# include <string>
# include <iostream>
# include <iomanip>

class Contact {

private:

    size_t              _index;
    size_t const        _info_len = 6;
    std::string         _info[6];
    static std::string  _fields_names[6];
    

public:

    void            set_info(size_t index);
    void            display_info(void) const;
    void            display_search(void) const;    
};

#endif
