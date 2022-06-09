#ifndef DIRECTORY_CLASS_H
# define  DIRECTORY_CLASS_H
# include <string>
# include <iostream>
# include "Contact.class.hpp"

class Directory {

private:

    Contact     _contact[8];
    size_t      _contact_len  = 0;


public:

    void        add_contact(size_t index);
    void        display_directory(void) const;
            
};

#endif