#include <iostream>
#include <vector>

int main()
{
    
    int element{};
    int max{-1}, Row{}, Col{};

    for (int row{}; row < 9; row++)
    {
        for (int col{}; col < 9; col++)
        {
            std::cin >> element;

            if (max < element)
            {
                max = element;
                Row = row+1;
                Col = col+1;
            }
        }
    }
    
    std::cout << max << "\n";
    std::cout << Row << " " << Col;
    
    return 0;
    
}