#include <iostream>
#include <vector>

int main()
{
    int num{};
    std::cin >> num;
    while(num != -1)
    {
        int sum{};
        std::vector<int> N{};
        for (int i{1}; i < num; ++i)
        {
            if (num%i == 0) 
            { 
                N.push_back(i);
                sum += i;
            }  
        }

        if (num != sum) {std::cout << num << " is NOT perfect. \n";}
        else if (num == sum)
        {
            std::cout << num << " = " << N[0] << " + ";
            for (int i{1}; i < N.size()-1; ++i)
            {
                std::cout << N[i] << " + ";
            }
            std::cout << N[N.size()-1] << "\n";
        }

        std::cin >> num;
    }
    
    return 0;
}