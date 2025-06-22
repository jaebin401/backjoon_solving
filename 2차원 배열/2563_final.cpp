#include <iostream>

int main()
{
    bool board[100][100] {};
    int squares{}, count{};
    std::cin >> squares;
    while(squares--)
    {   
        int x{}, y{};
        std::cin >> x >> y;

        for (int i{x}; i<x+10; ++i)
        {
            for (int j{y}; j<y+10; ++j)
            {
                if (!board[i][j])
                {
                    board[i][j] = true;
                    count++;
                }
            }
        }
    }

    std::cout << count;
    return 0;

}