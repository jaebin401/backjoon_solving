#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<string> m(5, std::string s);
    for(int i{}; i<5; i++)
    {
        std::cin >> m[i];
    }
    
    for (int i{}; i<15; i++)
    {
        for (int j{}; j<5; j++)
        {
            if(m[j][i] == ' ') {continue;}
            else { std::cout << m[j][i]; }
        }
    }
    
    return 0;
        
}