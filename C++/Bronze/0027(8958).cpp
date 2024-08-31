// 8958

#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; // 테스트 케이스
    cin >> T;

    for (int i = 0; i < T; i++) {
        string result;
        cin >> result;

        int score = 0;
        int countO = 0;

        for (int j = 0; j < result.length(); j++) {
            if (result[j] == 'O') {
                countO++;
                score += countO;
            } 
            else countO = 0;
        }
        cout << score << endl;
    }

    return 0;
}
