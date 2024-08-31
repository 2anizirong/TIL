// 2292

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    // 1 -> 6 -> 12 -> 18 ...
    // 수열: a1 = 1이고 (n >= 2)부터는 6 * (n - 1)
    int n = 1;
    int lastNum = 1;
    
    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }
    while (lastNum < N) {
        n++;
        lastNum += 6 * (n - 1);
    }
    
    cout << n << endl;

    return 0;
}
