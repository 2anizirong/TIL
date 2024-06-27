// 1457

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;       // 손님의 수
    
    bool seat[100] = {false};       // 피시방 좌석
    int doNotSeat = 0;

    for (int i = 0; i < N; i++) {
        int choose;         // 손님이 고르는 자리 번호
        cin >> choose;
        
        if (seat[choose - 1] == false) {
            seat[choose - 1] = true;
        }
        else doNotSeat++;
    }
    
    cout << doNotSeat << endl;

    return 0;
}
