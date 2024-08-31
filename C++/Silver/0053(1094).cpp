// 1094

// 방법1. 이진수와 비트 개념
#include <iostream>
using namespace std;

int main()
{
    int X;  cin >> X;
    int cnt = 0;
    
    while (X > 0) {
        if (X % 2 == 1) cnt++;
        X /= 2;
    }
    cout << cnt;

    return 0;
}


// 방법2. 내가 푼 방법
#include <iostream>
using namespace std;

int main() {
    int X; cin >> X;

    int yourBar = 64;
    int cnt = 0;

    while (X > 0) {
        if (X < yourBar) yourBar /= 2;          // 내가 가진 막대기가 더 길면 /2
        else {
            X -= yourBar;                       // 내가 가진 막대기가 작거나 같으면 X에서 빼기
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
