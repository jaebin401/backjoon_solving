#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    
    N -= 2;
    
    int min{}, Max{};
    int i{};
    
    for (i=1; true && (N!=1); i++)
    {
        min = Max+1;
        Max = min + i;
        
        if (N <= Max && min <= N) break;
    }
    
    std::cout << i;
    
    return 0;
    
}