//g++ vector.cpp -std=c++11
#include <iostream>
#include <vector>
#include <algorithm>  //find算法的头文件


int main() {
    std::vector <int> v = {1, 2, 3}; //声明vector, 并初始化
    // vector(); 初始化空vector
    // vector(int n); 初始化含有n个元素的vector
    // vector(int n, const T & val); 初始化含有n个元素的vector, 每个元素的类型为T, 值为val

    v.push_back(4);  //添加元素
    v.pop_back();  //删除末尾元素

    // 查看vector元素个数
    int v_len = v.size();
    std::cout << v_len << std::endl;

    // 遍历
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << std::endl;
    }

    // 查找
    std::vector <int>::iterator f = std::find(v.begin(), v.end(), 4);
    if (f != v.end()) {
        std::cout << "4 in v!" << std::endl;
    } else {
        std::cout << "4 not in v!" << std::endl;
    }
    return 0;
}