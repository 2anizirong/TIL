// 11723

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); // 입력 속도 향상
    cin.tie(NULL);

    int M;
    cin >> M;

    int S = 0;
    while (M--) {
        string cmd;
        int x;
        cin >> cmd;

        if (cmd == "add") {
            cin >> x;
            S |= (1 << (x - 1));
        }
        else if (cmd == "remove") {
            cin >> x;
            S &= ~(1 << (x - 1)); // x를 제거
        } 
        else if (cmd == "check") {
            cin >> x;
            cout << ((S & (1 << (x - 1))) ? 1 : 0) << '\n';
        } 
        else if (cmd == "toggle") {
            cin >> x;
            S ^= (1 << (x - 1));
        } 
        else if (cmd == "all") {
            S = (1 << 20) - 1; // 모든 요소
        } 
        else if (cmd == "empty") {
            S = 0; // 공집합으로 변경
        }
    }

    return 0;
}
