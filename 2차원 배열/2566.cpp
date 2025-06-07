#include <iostream>
#include <vector>

int main()
{
    int N{9}, M{9};
    
    std::vector<std::vector<int>> m(N, std::vector<int>(M, 0));
    
    for (int row{}; row < N; row++)
    {
        for (int col{}; col < M; col++)
        {
            std::cin >> m[row][col];
        }
    }
    
    int max{}, Row{}, Col{};
    for (int row{}; row < N; row++)
    {
        for (int col{}; col < M; col++)
        {
            if (max < m[row][col])
            {
                max = m[row][col];
                Row = row+1;
                Col = col+1;
            }
            else { continue; }
        }
    }
    
    std::cout << max << "\n" << Row << " " << Col;
    
    return 0;
    
}