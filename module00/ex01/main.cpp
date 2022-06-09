#include <iostream>
#include "user.class.hpp"

int     main(void) {

    user            instance[8];
    std::string     order[6];
    size_t          index = 0;

    while (true) {
        std::getline(std::cin, order);
        if (!order.compare("ADD")) {
            if (index < 8) {
                instance[index].add_contact
            }
        }       
    }
    return 0;
}