#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    std::vector <int> v = {1, 2, 3};
    //查找
    std::vector <int>::iterator f = std::find(v.begin(), v.end(), 4);
    if (f != v.end()) {
        std::cout << "4 in v!" << std::endl;
    } else {
        std::cout << "4 not in v!" << std::endl;
    }
    return 0;
}