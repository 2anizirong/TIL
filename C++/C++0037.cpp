// 11050

#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    int a = 1;
    for (int i = N; i >= 1; i--) {
        a *= i;
    }

    int M = N - K;
    int b = 1;
    for (int i = M; i >= 1; i--) {
        b *= i;
    }
    a = a / b;
    
    int c = 1;
    for (int i = K; i >= 1; i--) {
        c *= i;
    }
    
    cout << a / c << '\n';

    return 0;
}
