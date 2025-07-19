#include <iostream>

int main()
{
    int a1{}, a2{}, a3{}; // these must be a1 > a2 > a3
    
    while(1)
    {
        std::cin >> a1 >> a2;
        if (a1 < a2) { std::swap(a1, a2); }
        std::cin >> a3;
        if (a2 < a3) { std::swap(a2, a3); }
        if (a1 < a2) { std::swap(a1, a2); }
        
        
        if (a1 == 0) {break;}
        if ( a1 < a2+a3 ) // normal case
        {
            if (a1 == a2 && a2 == a3) {std::cout << "Equilateral \n";}
            else if ( a1 == a2 || a1 == a3 || a2 == a3 ) {std::cout << "Isosceles \n";}  
            else {std::cout << "Scalene \n";}     
        }
        else { std::cout << "Invalide \n"; } // abnormal triangle
    }
    
    return 0;
}