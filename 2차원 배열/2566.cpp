#include <iostream>
#include <vector>

int main()
{
    int N, M;
    std::cin >> N >> M;
    
    std::vector<std::vector<int>> m(N, std::vector<int>(M, 0));
    
    for (int row{}; row < N; row++)
    {
        for (int col{}; col < M; col++)
        {
            std::cin >> m[row][col];
        }
    }
    
    int max{};
    int Row, Col;
    for (int row{}; row < N; row++)
    {
        for (int col{}; col < M; col++)
        {
            if (max < m[row][col])
            {
                max = m[row][col];
                Row = row;
                Col = col;
            }
            else { continue; }
        }
    }
    
    std::cout << max << "\n" << Row << " " << Col;
    
    return 0;
    
}