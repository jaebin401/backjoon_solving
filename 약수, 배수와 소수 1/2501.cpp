#include <iostream>
#include <vector>

int main()
{
    int n{}, k{};
    vector<int> L;
    
    std::cin >> n >> k;
    
    for (int i{1}; i =< L; ++i)
    {
        if (n % i == 0) {L.insert(L.begin(), n/i);}
        else continue;
    }
    
    if (k > L.length()) std::cout << 0;
    else std::cout << L[k-1];
    
    return 0;
}