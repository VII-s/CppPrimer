#include <iostream>

int main()
{
    std::cout << "Please enter two numbers:";
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    int tmp1, tmp2;
    tmp1 = (n1 < n2) ? n1 : n2;
    tmp2 = (n1 > n2) ? n1 : n2;
    for (int i = tmp1; i <= tmp2; i++)
    {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
    return 0;
}
