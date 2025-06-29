#include <iostream>

int main()
{
    int row{}, col{}, nextRow{1}, n{}; 
    std::cin >> n;
    
    while(n--)
    {
        if (row == 0)
        {
            row = nextRow;
            nextRow++;
            col = 0;
            
            continue;
        }
        
        row--; col++;
    }
    
    std::cout << row+1 << "/" << col+1 << "\n";
    
    return 0;
}