#include <iostream>
#include <vector>
#include <algorithm>

struct point
{
    int x;
    int y;
};

int main()
{
    int squares{};
    std::cin >> squares;
    
    std::vector<point> p(squares, {0, 0}); // 🚨 이 부분 매우 중요
    int Area {};
    int Xend{}, Yend{};
    
    // enter all the start point
    for (int i{}; i<squares; ++i)
    {
        std::cin >> p[i].x >> p[i].y;
        if(p[i].x > Xend) Xend = p[i].x;
        if(p[i].y > Yend) Yend = p[i].y;
    }

    std::vector<std::vector<bool>> board(Xend, std::vector<bool>(Yend, 0));
    for(point pt : p)
    {
        int row{pt.y}, col{pt.x}, t{10}, T{10};
        while(t--)
        {
            while(T--)
            {
                board[row][col] = true;
                col++;
            }
            col = pt.x;
            row--;
        }
    }
    
    for (int i{}; i<Xend; i++)
    {
        for (int j{}; j<Yend; j++)
        {
            if (board[i][j] == true) Area++;
            else continue;
        }
    }
    std::cout << Area <<"\n";
    
    return 0;
}