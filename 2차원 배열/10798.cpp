#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> m(5);
    int maxLen{};
    for(int i{}; i<5; i++)
    {
        std::cin >> m[i];
        std::string s = m[i];
        if(maxLen < s.length()) { maxLen = s.length(); }
    }

    for (int i{}; i<maxLen; i++)
    {
        for (int j{}; j<5; j++)
        {
            if(m[j][i] == ' ') {continue;}
            else { std::cout << m[j][i]; }
        }
    }
    
    return 0;
        
}