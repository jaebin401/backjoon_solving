#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    
    int line{(int)std::pow(2, N)+1};
    
    std::cout << line*line;
    
    return 0;
}