// 2231

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int result = 0;
    
    for (int i = 1; i <= N; i++) {
        int sum = i;
        int tmp = i;
        
        while (tmp > 0) {       // 각 자리수의 합
            sum += tmp % 10;
            tmp /= 10;
        }
        
        if (sum == N) {
            result = i;
            break;
        }
    }
    cout << result << '\n';
    
    return 0;
}
