#include <iostream>

template <typename T>
void swap(T & arg1, T & arg2) {
    T tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;    
}

int main() {
    int int1 = 5;
    int int2 = 3;
    swap(int1, int2);
    std::cout << int1 << ';' << int2 << std::endl; 
    return 0;
}

/*
算法实现时不指定具体要操作的数据的类型, 减少重复代码的编写
调用函数时, C++编译器遵循以下优先顺序:
1. 先找参数完全匹配的普通函数(非由模板实例化而得的函数)
2. 再找参数完全匹配的模板函数
3. 再找实参经过自动类型转换后能够匹配的普通函数
4. 上面的都找不到, 则报错
*/