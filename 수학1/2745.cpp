#include <iostream>
#include <cmath>
#include <string>

int main()
{
    std::string B{};
    int N{}, total{};

    std::cin >> B >> N;
    
    int len = B.size();
    
    for (int i{}; i<len; ++i)
    {
        int num{};
        if(std::isdigit(B[i]))
            num = (int)(B[i]-'0');
        else 
            num = (int)(B[i]-'A'+10);
        
        total += num*std::pow(N, len-i-1);
    }
    
    std::cout << total;
    
    return 0;
}