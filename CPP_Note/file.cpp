#include <iostream>
#include <fstream>    // 文件流头文件
#include <string>
#include <cstdio>    // c函数rremove的头文件

int main() {
    // 写文件
    std::ofstream out_file("tmp.txt", std::ios::out); // 打开文件
    if (!out_file.good()) {    // 判断打开文件是否成功
		std::cerr << "Error while opening tmp.txt!" << std::endl;
	}
    out_file << "line1\n" << "line2\n";  // 写入文件
    out_file.close();    // 关闭文件

    // 读文件
    std::ifstream in_file("tmp.txt", std::ios::in); // 打开文件
    if (!in_file.good()) {    // 判断打开文件是否成功
		std::cerr << "Error while opening tmp.txt!" << std::endl;
	}
    // 按行读文件
    std::string lineString;
    while (getline(in_file, lineString)) {
        std::cout << lineString << std::endl;    // getline读取的内容不包括换行符 
    }
    in_file.close();    // 关闭文件

    remove("tmp.txt");    //删除文件

    return 0;
}
