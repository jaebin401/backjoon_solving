#include <iostream>

using namespace std;

int main()
{
    int a{}, b{};
    
    while(1)
    {
        if (a == 0 && b == 0) {break;}
        
        if ( a % b == 0 ) cout << "multiple";
        else if ( b % a == 0 ) cout << "factor";
        else cout << "neither";  
    }
    
    return 0; 
}