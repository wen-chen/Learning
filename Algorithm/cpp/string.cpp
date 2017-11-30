#include <string>
#include <iostream>

int main() {
    //初始化
    std::string s1("Hello"); //一个参数的构造函数
    std::string s2(8, 'x'); //两个参数的构造函数
    std::string month = "March";
    //不提供以字符和整数位参数的构造函数, 以下是错误的初始化方法
    //string error1 = 'c'; string error2('u'); string error3 = 22; string error4(8);
    
    //可以将字符赋值给string对象
    std::string s3;
    s3 = 'n';
   
    //获取string的长度
    std::cout << s1.length() << std::endl;
    
    //逐个访问string对象中的字符
    for (int i = 0; i < s1.length(); i++) {
        std::cout << s1.at(i) << std::endl;
    } //成员函数at会做范围检查，如果超出范围，会抛出out_of_range异常, 而下标运算符不做范围检查
    
    //用+运算符连接字符串
    s1 = s1 + s2;
    std::cout << s1 << std::endl;
    
    //用成员函数append连接字符串
    s1.append(s3);
    std::cout << s1 << std::endl;
    
    //子串
    s1 = s1.substr(0,5); //下标0开始，5个字符
    std::cout << s1 << std::endl;
    
    //交换
    s1.swap(s2);
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    
    //查看对象是否为空
    std::cout << s1.empty() << std::endl;

    //用关系运算符比较string的大小
    std::cout << (s1 == s2) << std::endl;
    std::cout << (s1 > s2) << std::endl;

    //用成员函数compare比较string的大小
    std::cout << s1.compare(s2) << std::endl;
    std::cout << s2.compare(s1) << std::endl;

    //寻找string中的字符
    std::cout << s2.find("lo") << std::endl; //在s2中从前向后查找  “lo” 第一次出现的地方
    std::cout << (s2.find("xo") == std::string::npos) << std::endl; // 如果找不到, 返回std::string::npos (string中定义的静态常量)
    

    //替换string中的字符
    std::string s4("hello world");
    s4.replace(2, 3, "haha");  //将s4中下标2开始的3个字符换成 “haha”
    std::cout << s4 << std::endl;

    //在string中插入字符
    s4.insert(5, " insert "); // 将" insert "插入s4下标5的位置
    std::cout << s4 << std::endl;
    
    return 0;
}