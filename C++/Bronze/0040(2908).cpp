// 2908

#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;      // 두 세 자리 수가 주어짐
    
    A = ((A % 10) * 100) + (A - (100 * (A / 100)) - (A % 10)) + (A / 100);
    B = ((B % 10) * 100) + (B - (100 * (B / 100)) - (B % 10)) + (B / 100);
    
    if (A > B) cout << A << '\n';
    else cout << B << '\n';
    
    return 0;
}
