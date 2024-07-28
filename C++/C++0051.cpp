// 1929

#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N; // M 이상 N 이하의 수들 중 소수 모두 출력

    for (int n = M; n <= N; n++) {
        if (n < 2) continue;

        bool isPrime = true;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << n << '\n'; // 소수인 경우 출력
    }
    return 0;
}
