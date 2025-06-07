#include <iostream>
#include <vector>
#define cycle 20

float GradeCal(int n, string &grade)
{
    if (string == 'A+') return n*4.5;
    else if (string == 'A0') return n*4.0;
    else if (string == 'B+') return n*3.5;
    else if (string == 'B0') return n*3.0;
    else if (string == 'C+') return n*2.5;
    else if (string == 'C0') return n*2.0;
    else if (string == 'D+') return n*1.5;
    else if (string == 'D0') return n*1.0;
    else if (string == 'F') return 0;
}

int main()
{
    int total{};
    double totalGrade{};
    
    while(cycle--)
    {
        std::string s, grade;
        int n;
        std::cin >> s >> n >> grade;
        total += n;
        totalGrade += GradeCal(n, grade);
    }
    
    std::cout << totalGrade/total << "\n";
    return 0;
    
}