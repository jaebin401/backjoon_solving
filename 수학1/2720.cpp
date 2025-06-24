#include <iostream>

int main()
{
    int unit[4] = {25, 10, 5, 1};
    int T;
    std::cin >> T;
    
    while (T--)
    {
        int N{};
        int arr[4]{};
        std::cin >> N;
        
        for (int i{}; i<4; i++)
        {
            std::cout << N/unit[i] << " ";
            N %= unit[i];
        }
        std::cout <<"\n";
    }
    
    return 0;
}