#include <iostream>
#include <vector>

int main()
{
    int N{9}, M{9};
    
    std::vector<std::vector<int>> m(N, std::vector<int>(M, 0));
    int max{}, Row{}, Col{};

    for (int row{}; row < N; row++)
    {
        for (int col{}; col < M; col++)
        {
            std::cin >> m[row][col];

            if (max < m[row][col])
            {
                max = m[row][col];
                Row = row+1;
                Col = col+1;
            }
        }
    }
    
    std::cout << max << "\n";
    std::cout << Row << " " << Col;
    
    return 0;
    
}