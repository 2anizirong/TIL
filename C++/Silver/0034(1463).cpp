// 1463
// 단순히 세 경우를 if-else문으로 나눠 풀면 안된다.

// 동적 계획법 (DP: Dynamic Programming)
// 큰 문제를 작은 문제로 나눠서 푸는 알고리

// 처음 코드
// 연산의 우선순위를 내가 임의로 줘버린 게 된다. 가장 작은 횟수로 1을 만드는 것을 구할 수 없다!

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;

    while (N > 1) {
        if (N % 3 == 0) {
            N = N / 3;
        } else if (N % 2 == 0) {
            N = N / 2;
        } else {
            N = N - 1;
        }
        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}

// -----------------------------------------------------------------------------
// 수정 코드

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
    
    // DP는 TOP-DOWN 방식 사용
    int DP[1000000];
	for (int i = 2; i <= N; i++) {
	    // 1 빼기
		DP[i] = DP[i - 1] + 1;
		
		// 2로 나누기
		if (i % 2 == 0) {
			DP[i] = min(DP[i], DP[i / 2] + 1);
		}
        
        // 3으로 나누기
		if (i % 3 == 0) {
			DP[i] = min(DP[i], DP[i / 3] + 1);
		}
	}
	cout << DP[N];

	return 0;
}
