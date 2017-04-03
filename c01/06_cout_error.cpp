#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
/*
    std::cout << "The sun of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
    //第1,2条语句结尾有‘;’，说明语句结束，第2,3条语句为新的语句，缺少输出流对象cout
*/
    std::cout << "The sun of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    
    return 0;
}
