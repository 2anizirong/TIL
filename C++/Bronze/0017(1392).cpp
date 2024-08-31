// 1392

#include <iostream>
using namespace std;

int main()
{
    int N, Q;       // 악보 수, 질문의 개수
    cin >> N >> Q;
    
    // 악보 시간
    int musicTime[N];
    for (int i = 0; i < N; i++) {
        cin >> musicTime[i];
    }
    
    // 알고자하는 질문의 시간
    int questTime[Q];
    for (int i = 0; i < Q; i++) {
        cin >> questTime[i];
    }
    
     // 각 악보의 종료 시간 
    int endTime[N];
    endTime[0] = musicTime[0];
    for (int i = 1; i < N; i++) {
        endTime[i] = endTime[i-1] + musicTime[i];
    }
    
    // 각 질문에 대한 해당 시간 악보
    for (int i = 0; i < Q; i++) {
        int time = questTime[i];
        for (int j = 0; j < N; j++) {
            if (time < endTime[j]) {
                cout << j + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
