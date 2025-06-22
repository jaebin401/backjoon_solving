#include <iostream>
#include <string>
using namespace std;

// 성적과 학점을 모두 건너뛸 “P” 포함, 모든 경우에 안전하게 반환
double GradeCal(int credits, const string &grade) {
    if (grade == "P")        return 0.0;          // pass 과목은 계산 제외
    if (grade == "A+")       return credits * 4.5;
    if (grade == "A0")       return credits * 4.0;
    if (grade == "B+")       return credits * 3.5;
    if (grade == "B0")       return credits * 3.0;
    if (grade == "C+")       return credits * 2.5;
    if (grade == "C0")       return credits * 2.0;
    if (grade == "D+")       return credits * 1.5;
    if (grade == "D0")       return credits * 1.0;
    if (grade == "F")        return 0.0;
    return 0.0;               // 혹시 모를 입력 오류에도 안전
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int totalCredits = 0;
    double totalScore = 0.0;
    for (int i = 0; i < 20; ++i) {
        string course, grade;
        int credits;
        cin >> course >> credits >> grade;
        double g = GradeCal(credits, grade);
        if (grade != "P") {                   // pass 과목 제외
            totalCredits += credits;
            totalScore   += g;
        }
    }

    cout << fixed << setprecision(6)
         << (totalCredits ? totalScore / totalCredits : 0.0)
         << "\n";
    return 0;
}