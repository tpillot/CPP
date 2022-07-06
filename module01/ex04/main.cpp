#include <fstream>
#include <iostream>


int     main(int ac, char** av) {
    
    std::string     line;
    std::string::size_type         pos = 0;
    size_t          end_pos = 0;
    size_t          size;
    size_t          s1_size;

    if (ac != 4)
        return 1;

    std::string     s1 (av[2]);
    std::string     s2 (av[3]);
    std::string     file_name (av[1]);
    std::ifstream   ifs(file_name);
    std::ofstream   ofs(file_name + ".replace");
    
    s1_size = s1.size();

    // std::cout << s1 + " " << s2 << std::endl;
    // return 0; 

    while (std::getline(ifs, line)) {
        
        size = line.size();

        while (true) {
            pos = line.find(s1, pos);
            // std::cout << line << pos << std::endl;
            if (pos == std::string::npos) {
                // std::cout << "---------" + line.substr(end_pos, size) << std::endl;
                ofs << line.substr(end_pos, size - end_pos) << std::endl;
                break;
            }
            // std::cout << end_pos << "       " << s1_size << "    " << pos << std::endl;
            // std::cout << line.substr(end_pos, pos) << std::endl;
            ofs << line.substr(end_pos, pos - end_pos) << s2;
            

            end_pos = pos + s1_size;
            pos++;

        }
        pos =0;
        end_pos =0;

    }
    ifs.close();
    ofs.close();


}
