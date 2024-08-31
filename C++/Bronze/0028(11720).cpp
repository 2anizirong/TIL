// 11720

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    string num;
    cin >> num;

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += num[i] - '0';  // 각 문자를 숫자로 변환하여 더하기
    }
    cout << sum << endl;

    return 0;
}
