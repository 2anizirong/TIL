// 1568

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int K = 1;
    int cnt = 0;
    while (N > 0) {
        if (N >= K) {
            N -= K;
            K++; cnt++;
        }
        else {
            K = 1;
        }
    }
    
    cout << cnt << '\n';

    return 0;
}
