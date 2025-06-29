#include <iostream>

int main()
{
    int row{}, col{}, n{}, mode{};
    
    int nextRow[4] = {0, 1, 1, -1};
    int nextCol[4] = {1, -1, 0, 1};
    
    std::cin >> n;
    n--;
    
    while(n--)
    {
        row += nextRow[mode];
        col += nextCol[mode];
        
        switch(mode)
        {
            case 0:
            case 2:
                {
                    mode ++;
                    continue;
                }
            case 1:
                {
                    if (col == 0) {mode++; continue;}
                }
            case 3:
                {
                    if (row == 0) {mode = 0; continue;}
                }
        }
    }
    
    std::cout << row+1 << "/" << col+1 << "\n"; 
    return 0;
}