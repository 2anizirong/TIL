// 2748

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }
    
    // int fibo[90] = { 0, 1 };
    long fibo[90] = { 0, 1 };
    for (int i = 2; i <= n; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
    
    cout << fibo[n] << '\n';
    
    return 0;
}
