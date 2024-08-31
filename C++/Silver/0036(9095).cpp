// 9095

#include <iostream>
using namespace std;

/* 
1 --> 1 (1)
2 --> 1 + 1 / 2 (2)
3 --> 1 + 1 + 1 / 1 + 2 / 2 + 1 / 3 (4)
4 --> (7)
5 --> 1 + 1 + 1 + 1 + 1 / 2 + 1 + 1 + 1 / ... (13)
규칙: 앞에꺼 세 개 더하기!!!
이거 DP다! 
*/

int main()
{
    int T;
    cin >> T;           // 테스트 케이스
    
    int *nums = new int[11];    // 주어질 정수 < 11
    nums[0] = 1; nums[1] = 1; nums[2] = 2; nums[3] = 4;          // 초기값은 초기화
    for (int i = 4; i < 11; i++) {
        nums[i] = nums[i - 1] + nums[i - 2] + nums[i - 3];
    }
    
    while(T--) {
        int n;
        cin >> n;
        cout << nums[n] << '\n';
    }

    return 0;
}
