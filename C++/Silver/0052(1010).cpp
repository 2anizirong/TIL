// 1010

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;       // 테스트 케이스 개수
    
    for (int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;          // 계산이 MCN 조합 계산이 되어야 함
    
        long long MCN = 1;         // 다리를 지을 수 있는 경우의 수 long long 타입으로 정리
        for (int j = 1; j <= N; j++) {
            MCN *= M;
            M--;
            MCN /= j;      // 이항정리 개념
        }        
        cout << MCN << '\n';
    }
    
    return 0;
}
