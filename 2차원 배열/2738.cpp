#include <iostream>
#include <vector>

int main()
{
    int row, col;
    std::cin >> row >> col;
    
    std::vector<std::vector<int>> m(row, std::vector<int>(col, 0));
    
    for (int i{}; i<row; i++)
    {
        for (int j{}; j<col; j++)
        {
            std::cin >> m[i][j];
        }
    }
    
    for (int i{}; i<row; i++)
    {
        for (int j{}; j<col; j++)
        {
            int num;
            std::cin >> num;
            m[i][j] += num;
        }
    }
    
    for (int i{}; i<row; i++)
    {
        for (int j{}; j<col; j++)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}