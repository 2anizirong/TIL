// 1934

#include <iostream>
#include <numeric>          // C++ 17부터 <numeric>헤더에 gcd, lcm 함수 추가
using namespace std;

int main()
{
    int T;          // 테스트 케이스의 개수 T
    cin >> T;
    
    int A, B;
    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        
        cout << lcm(A, B) << endl;
    }

    return 0;
}
