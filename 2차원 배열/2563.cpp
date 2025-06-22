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
    
    std::vector<point> p(squares, 0);
    int Area {100*squares};
    
    // enter all the start point
    for (int i{}; i<squares; ++i)
    {
        std::cin >> p[i].x >> p[i].y;
    }
    
    // sort it according to X value
    std::sort(p.begin(), p.end(), 
              [](const point& a, const point& b) 
              {
                return a.x < b.x;
              }
             );
    
    for(int i{}; i<squares; i++)
    {
        int start{p[i].x}, end{p[i].x+10};
        for (int j{i+1}; j<squares && (p[j].x > start && p[j].x << end); j++)
        {
            int Ystart{p[j].y}, Yend{p[j].y+10}
            int overlap{};
            
            if (p[i].y > Ystart && p[i].y < Yend)
                overlap = (end-p[j].x)*(p[i].y-Ystart);
            
            Area -= overlap;
            overlap{};    
        }
    }
    
    std::cout << Area <<"\n";
    
    return 0;
}