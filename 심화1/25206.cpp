#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double GradeCal(double credits, const string &grade) {
    if (grade == "A+") return credits * 4.5;
    if (grade == "A0") return credits * 4.0;
    if (grade == "B+") return credits * 3.5;
    if (grade == "B0") return credits * 3.0;
    if (grade == "C+") return credits * 2.5;
    if (grade == "C0") return credits * 2.0;
    if (grade == "D+") return credits * 1.5;
    if (grade == "D0") return credits * 1.0;
    if (grade == "F")  return 0.0;
    return 0.0;  // P는 여기서 처리하지 않으니 main에서 continue
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double totalCredits = 0.0;
    double totalScore   = 0.0;

    for (int i = 0; i < 20; ++i) {
        string course, grade;
        double credits;
        cin >> course >> credits >> grade;
        if (grade == "P") continue;   // Pass 과목은 건너뛰기

        totalCredits += credits;
        totalScore   += GradeCal(credits, grade);
    }

    double gpa = totalScore / totalCredits;
    cout << fixed << setprecision(6) << gpa << "\n";
    return 0;
}