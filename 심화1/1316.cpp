#include <iostream>
#include <string>

int main()
{
    int n{};
    std::cin >> n;
    
    bool exists[26]{};
    bool groupword = true;
    int count{0};
    
    while(n--)
    {
        groupword = true;
        std::string s;
        std::cin >> s;
        
        char cG = s[0]; // current Group
        for (int i{1}; i<s.length(); i++)
        {
            if(cG == s[i]) { continue; }
           
            else
            {
                if (exists[s[i]-'a'] == true) 
                {
                    groupword = false;
                    break;
                }
                
                else
                {
                    groupword = true;
                    exists[cG-'a'] = true;
                    cG = s[i];
                }
            }
        }
        if (groupword == true) { count++; }
        
    }
    std::cout << count <<"\n";
    return 0;
}