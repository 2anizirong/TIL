// 11866

#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    int *arr = new int[N];
    for (int i = 0; i < N; i++) arr[i] = i + 1;
    
    int *result = new int[N];
    int index = 0, cnt = 0, numLeft = N;

    while (numLeft > 0) {       // 남아있는 사람의 수 > 0인 동안
        // 모듈러 연산으로 원형 리스트
      // 여기 부분 복습하기.. 어려움 ㅜ.,ㅜ
        cnt = (cnt + K - 1) % numLeft;
        result[index++] = arr[cnt];

        for (int i = cnt; i < numLeft - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        numLeft--;
    }

    cout << "<";
    
    for (int i = 0; i < N; i++) {
        cout << result[i];
        if (i != N - 1) {
            cout << ", ";
        }
    }
    
    cout << ">";
    
    return 0;
}
