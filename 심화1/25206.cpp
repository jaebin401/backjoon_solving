#include <iostream>
#include <vector>
//#define cycle 20

float GradeCal(int n, std::string &grade)
{
    if (grade[0] == 'A') 
    {
        if (grade[1] == '+') return n*4.5;
        else return n*4.0;
    }
    
    else if (grade[0] == 'B')
    {
        if (grade[1] == '+') return n*3.5;
        else return n*3.0;
    }

    else if (grade[0] == 'C')
    {
        if (grade[1] == '+') return n*2.5;
        else return n*2.0;
    }

    else if (grade[0] == 'D')
    {
        if (grade[1] == '+') return n*1.5;
        else return n*1.0;
    }
    
    else if (grade[0] == 'F') return 0.0;

    return 0.0;
}

int main()
{
    int total{};
    double totalGrade{};
    
    int cycle = 20;
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