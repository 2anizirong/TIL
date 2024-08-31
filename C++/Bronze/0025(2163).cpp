// 2163

#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int cnt = 0;
    
    if (M > 1) cnt += M - 1;
    
    for (int i = 0; i < M; i++) {
        if (N > 1) cnt += N - 1;
    }
    
    cout << cnt << endl;

    return 0;
}
