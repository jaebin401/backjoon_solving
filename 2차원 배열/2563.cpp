#include <iostream>
#include <vector>

struct coord
{
    int x;
    int y;
};

int main()
{
    int area, squares, overlap;
    
    
    std::cin >> squares;
    std::vector<coord> m(squares);
    area = 100*squares;
    
    for (int i{}; i<squares; ++i)
    {
        std::cin >> m[i].x >> m[i].y;
    }
    
    for (int i{}; i<squares; ++i)
    {
        int basicX = m[i].x+10;
        int basicY = m[i].y+10;
        
        for (int j{i+1}; j<squares; ++j)
        {
            if (basicX > m[j].x && basicY > m[j].y)
            {
                overlap += (m[j].x-m[i].x)*(m[j].y-m[i].x);
            }
        }
    }
    
    area -= overlap;
    std::cout << area << "\n";
    
    return 0;
}