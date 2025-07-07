#include <iostream>
#include <vector>

int main()
{
    int n{}, k{};
    std::vector<int> L;
    
    std::cin >> n >> k;
    
    for (int i{1}; i <= n; ++i)
    {
        if (n % i == 0) {L.insert(L.begin(), n/i);}
        else continue;
    }
    
    if (k > L.size()) std::cout << 0;
    else std::cout << L[k-1];
    
    return 0;
}