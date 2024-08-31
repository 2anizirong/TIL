// 1978

#include <iostream>
using namespace std;

// 소수 판별 함수
bool prime(int n) {
    if (n <= 1) return false; // 1 이하의 숫자는 소수가 아님
    if (n == 2) return true;  // 2는 소수
    if (n % 2 == 0) return false; // 짝수는 소수가 아님 (2 제외)
    for (int i = 3; i * i <= n; i += 2) { // 홀수만 검사
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;     // 수의 개수
    
    int arr[N];
    int cnt = 0;        // 소수의 개수 카운트
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        
        if (prime(arr[i])) cnt++;
    }
    
    cout << cnt << endl;

    return 0;
}
