#include <iostream>

int main()
{
    int t{}, count{};
    std::cin >> t;
    
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
            if (num%i == 0) {isPrime = false; break;} // break는 가장 나중에 위치해야 한다.
        }
        
        if (isPrime == true) {count++;}
        else {continue;}
    }
    std::cout << count << "\n";
    
    return 0;
}