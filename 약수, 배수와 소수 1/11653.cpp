#include <iostream>

int nextPrime(int n)
bool isPrime(int n)
    
int main()
{
    int num{}, n{2}; std::cin >> num;
    while(num != 1)
    {
        if (num % n == 0) 
        {
            std::cout << n << "\n";
            num /= n;
        }
        else (n = nextPrime(n);)
    }
    
    return 0;
}

int nextPrime(int n)
{
    while(!isPrime(n)) { n++; }
    return n;
}

bool isPrime(int n)
{
    for(int i{2}; i < n; ++n)
    {
        if (n%i == 0) {return false;}
    }
    return true;
}