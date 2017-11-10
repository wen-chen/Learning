#include <iostream>
#include <string>
#include <vector>

void SplitString(const std::string & s, std::vector <std::string> & v, const std::string & c) {
    std::string::size_type pos1, pos2;
    pos1 = 0;
    pos2 = s.find(c);
    while (std::string::npos != pos2) {
        v.push_back(s.substr(pos1, pos2 - pos1));
        pos1 = pos2 + c.size();
        pos2 = s.find(c, pos1);
    }
    if (pos1 != s.length()) {
        v.push_back(s.substr(pos1));
    }
}

int main() {
    std::string s = "abc,def,ghi";
    std::string c = ",";
    std::vector <std::string> v;
    SplitString(s, v, c);
    for (auto item : v) {
        std::cout << item << std::endl;
    }
    return 0;
}