#include <iostream>

int main()
{
    int t{}, cout{};
    
    while(t--)
    {
        int num{}; std::cin >> num;
        bool isPrime{true};
        
        switch(num)
        {
            case 1:
            case 2:
            {
                count++;
                continue;
            }
            default: {}
        }
        
        for (int i{2}; i<num; ++i)
        {
            if (num%i == 0) {break; isPrime = false;}
        }
        
        if (isPrime == true) {count++;}
        else {continue;}
    }
    std::cout << count << "\n";
    
    return 0;
}