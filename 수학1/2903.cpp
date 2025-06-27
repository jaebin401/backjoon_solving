#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    
    int line{1};

    while(N--)
    {
        line *= 2;
    }

    line++;
    
    std::cout << line*line;
    
    return 0;
}