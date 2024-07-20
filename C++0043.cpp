// 2896

#include <iostream>
#include <iomanip>
// iomanip: Input Output Manipulator의 약어로 입출력 조정자
using namespace std;

int main()
{
    double A, B, C; double I, J, K;
    cin >> A >> B >> C;         // 오, 사, 파의 양
    cin >> I >> J >> K;         // 오, 사, 파의 비율
    
    double a = A / I;
    double b = B / J;
    double c = C / K;
    
    double min = a < b ? a : b;
	min = min < c ? min : c;

    cout << fixed << setprecision(6);
  // 부동 소수점 수 유효숫자 설정하기
  // setprecision(()은 한 번 설정하면 계속 유지된다!
    cout << A - min * I << " " << B - min * J << " " << C - min * K;

    return 0;
}
