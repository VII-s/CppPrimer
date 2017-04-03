#include <iostream>

int main()
{
    int sum = 0, val = 0;
    std::cout << "请输入一些数，按Ctrl+D表示结束" << std::endl;
    for (; std::cin >> val;)
    {
        sum += val;
    }
    std::cout << "读入数之和为：" << sum << std::endl;

    return 0;
}
