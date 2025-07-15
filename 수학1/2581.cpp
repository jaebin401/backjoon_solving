#include <iostream>

bool isPrime(int n);

int main()
{
    int M{}, N{}, sum{}, min{-1}; std::cin >> M >> N;
    
    for (int i{M}; i <= N; ++i)
    {
        if (isPrime(i) == true)
        {
            sum += i;
            if (min == -1) {min = i;}
        }
    }
    
    if (sum == 0) { std::cout << num; }
    else
    { std::cout << sum << "\n" << min "\n"; }
    
    return 0;
}

bool isPrime(int n)
{
    for (int i{2}; i<n; ++i)
    {
        if(n%i == 0) {return false;}
    }
    return true;
}