// 2592

#include <iostream>
using namespace std;

int main()
{
    int *num = new int[10];
    int sum = 0;
    int cnt[1000] = { 0 };
    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        
        sum += num[i];
        
        cnt[num[i]]++;
    }
    int mode = num[0];
    int maxCnt = cnt[num[0]];
    for (int i = 0; i < 10; i++) {
        int tmp = cnt[num[i]];
        if (tmp > maxCnt) {
            maxCnt =tmp;
            mode = num[i];
        }
    }
    cout << sum / 10 << '\n' << mode;

    return 0;
}
