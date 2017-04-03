#include <iostream>

int main()
{
    std::cout << "Please enter two numbers:";
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    int tmp1, tmp2;
    tmp1 = (n1 < n2) ? n1 : n2;
    tmp2 = (n1 > n2) ? n1 : n2;
    while (tmp1 <= tmp2)
    {
        std::cout << tmp1 << "\t";
        tmp1++;    
    }
    std::cout << std::endl;
    return 0;
}
