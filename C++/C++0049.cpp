// 2711

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;       // 테스트 케이스
    
    for (int i = 0; i < T; i++) {
        int pos; cin >> pos;
        string wrongStr; cin >> wrongStr;
        
        string s1 = wrongStr.substr(0, pos - 1);
        string s2 = wrongStr.substr(pos);
        cout << s1 + s2 << endl;
    }

    return 0;
}
