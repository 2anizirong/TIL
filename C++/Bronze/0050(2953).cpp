// 2953

#include <iostream>
using namespace std;

int main()
{
    int sum[5] = { 0 };
    int maxSum = 0;
    int maxIndex = 0;

    for (int i = 0; i < 5; i++) {
        int scores[4];
        for (int j = 0; j < 4; j++) {
            cin >> scores[j];
            sum[i] += scores[j];
        }

        if (sum[i] > maxSum) {
            maxSum = sum[i];
            maxIndex = i;
        }
    }
    
    cout << maxIndex + 1 << " " << maxSum;

    return 0;
}
