#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map <std::string, int> u_map = {{"A", 1}, {"B", 2}};    //申明及初始化
    u_map["C"] = 3;    //插入1
    u_map.insert(std::unordered_map <std::string, int>::value_type("D", 4));    //插入2
    //查找1
    if (u_map.find("A") != u_map.end()) {
        std::cout << "A in u_map" <<std::endl;
    }
    //查找2
    if (u_map.count("B") != 0) {
        std::cout << "B in u_map" << std::endl;
    }
    //删除
    u_map.erase("D");
    //遍历
    for (auto & item : u_map) {
        std::cout << item.first << ": " << item.second << std::endl;
    }
    return 0;
}