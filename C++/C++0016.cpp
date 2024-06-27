// 1550

#include <iostream>
#include <string>
using namespace std;

int main() {
    string hex;
    cin >> hex;  // 16진수

    // stoi 함수를 사용 16 --> 10
    int dec = stoi(hex, 0, 16);

    cout << dec << endl;

    return 0;
}
