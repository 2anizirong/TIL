// 1371

#include <iostream>
#include <string>
using namespace std;

int main() {
    int alpha[26] = {0};
    string line;

    // 입력을 한 줄씩 읽기
    while (getline(cin, line)) {
        for (int i = 0; i < line.length(); i++) {
            char c = line[i];
            if (c >= 'a' && c <= 'z') {
                alpha[c - 'a']++; // 해당 알파벳의 빈도 증가
            }
        }
    }

    // 가장 많이 나온 알파벳을 찾기
    int maxAlpha = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > maxAlpha) {
            maxAlpha = alpha[i];
        }
    }

    // 가장 많이 나온 알파벳을 출력
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == maxAlpha) {
            cout << (char)('a' + i);
        }
    }
    cout << endl;

    return 0;
}
