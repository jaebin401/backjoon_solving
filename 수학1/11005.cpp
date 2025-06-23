#include <iostream>
#include <string>

int main()
{
    int B{}, N{};
    char num{};
    std::string total{};
    
    std::cin >> N >> B;
    
    while(!N)
    {
        num = N%B;
        N /= B;
        if (num > '9') num-'0'+'A';
        total.push_back(num);
    }
    
    std::cout << total;
    
    return 0;
}