#include <string>


namespace log_line {
std::string message(std::string line) {
    size_t pos = line.find(":");
    return line.substr(pos + 2);
}

std::string log_level(std::string line) {
    size_t pos_1 = line.find("[");
    size_t pos_2 = line.find("]");
    return line.substr(pos_1+1,pos_2-1);
}

std::string reformat(std::string line) {
    size_t pos_1 = line.find(":");
    size_t pos_2 = line.find("[");
    size_t pos_3 = line.find("]");
    
    return line.substr(pos_1+2)+ " (" + line.substr(pos_2+1,pos_3-1) +")";
}
}  // namespace log_line
