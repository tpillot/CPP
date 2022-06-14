#include "Directory.class.hpp"

int     main(void) {

    Directory       directory;
    size_t          index = 0;
    std::string     order;

    while (true) {
        std::cout << "COMMAND : ";
        std::getline(std::cin, order);
        if (!order.compare("ADD")) {
            if (index == 8) {
                index = 0;
            }
            directory.add_contact(index);
            index++;
        }
        else if (!order.compare("SEARCH")) {
            directory.display_directory();
        }
        else if (!order.compare("EXIT")) {
            break;
        }
    }
    std::cout << "BYE !";
    return 0;
}