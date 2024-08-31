// 1316

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;       // 단어의 개수
    
    int cnt = 0;    // 그룹 단어 카운팅
    
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        
        bool isGroup = true;
        bool isAgain[26] = { false };
        
        for (int j = 0; j < str.length(); j++) {
            if (isAgain[str[j] - 'a']) {
                if (str[j] != str[j - 1]) {
                    isGroup = false;
                    break;
                }
            }
            else isAgain[str[j] - 'a'] = true;
        }
        if (isGroup) cnt++;
    }
    cout << cnt << '\n';
    
    return 0;
}
