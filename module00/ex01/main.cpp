#include <iostream>
#include "user.class.hpp"

int     main(int ac, char **av) {

    user    instance[8];
    char    order[6];
    int     index = 0;

    (void)av;
    if (ac > 1){
        return 0;
    }

    while (true) {
        std::cin >> order;
        
    }
    return 0;
}