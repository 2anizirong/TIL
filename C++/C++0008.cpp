// 1173

#include <iostream>
using namespace std;

int main()
{
    // N: 운동할 시간 m: 최소 맥박 M: 최대 맥박 
    // T: 맥박 증가 R: 맥박 감소
    int N, m, M, T, R;
    cin>>N>>m>>M>>T>>R;
    
    int cnt=0;      // 운동하는 시간 카운트
    int currentPulse=m;
    int exerciseTime=0;
    int totalTime=0;
    
    // 운동을 못하는 경우
    if(m+T>M){
        cout<<-1<<endl;
        return 0;
    }
    
    while(exerciseTime<N){
        if(currentPulse+T<=M){
            // 운동가능
            currentPulse+=T;
            exerciseTime++;
        }
        else{
            // 휴식가능
            currentPulse-=R;
            if(currentPulse<m) currentPulse=m;
        }
        totalTime++;
    }
    cout<<totalTime<<endl;
    
    return 0;
}
