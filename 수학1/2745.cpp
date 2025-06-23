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
        if ((int)B[i] > 9) num = (int)(B[i]-'A'+10);
        else num = (int)B[i];
        
        total += num*std::pow(N, i);
    }
    
    std::cout << total;
    
    return 0;
}