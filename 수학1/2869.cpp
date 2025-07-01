#include <iostream>

int main()
{
    int A{}, B{}, V{}, day{};
    
    std::cin >> A >> B >> V;
    
    while(1) //
    {
        V -= A; day++;
        if (V <= 0) {break;}
        V += B;
    }
    
    std::cout << day;
    
    return 0;
}