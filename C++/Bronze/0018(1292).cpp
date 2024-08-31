// 1292

#include <iostream>
using namespace std;

int main()
{
    int A, B, result = 0;
    cin >> A >> B;      // 구간의 시작과 끝

    // 이상한 수열 만들기
    int *arr = new int[B]; // 배열의 크기를 B로 설정
    int index = 0;
    for (int i = 1; index < B; ++i) {
        for (int j = 0; j < i && index < B; ++j) {
            arr[index++] = i;
        }
    }
    // 구간 더하기
    for (int i = A - 1; i < B; i++) {
        result += arr[i];
    }
    cout << result << endl;
    
    delete[] arr;      // 할당받은 메모리 반납해주기!
    
    return 0;
}
