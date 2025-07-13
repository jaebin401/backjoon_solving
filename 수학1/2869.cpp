#include <iostream>

int main()
{
    int A{}, B{}, V{}, day{};
    
    std::cin >> A >> B >> V;
    
    if (V%(A-B) == 0) day = V/(A-B)-B;
    else if (V%(A-B) != 0) day = V/(A-B)+1;
    
    std::cout << day;
    
    return 0;
}