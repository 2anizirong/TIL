// 1546

#include <iostream>
using namespace std;

int main()
{   
    int N;      // 시험 본 과목의 개수
    cin >> N;
    int scores[N];
    int maxScore = 0;
    double sum = 0.0;
    
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
        if (scores[i] > maxScore) {
            maxScore = scores[i];
        }
    }
    
    for (int i = 0; i < N; i++) {
        sum += (double)scores[i] / maxScore * 100.0;
    }
    double avg = sum / N;
    cout << avg << endl;
    
    return 0;
}
