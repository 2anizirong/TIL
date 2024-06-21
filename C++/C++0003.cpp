#include <iostream>
using namespace std;

int main()
{
    int N, F;
    // N과 F를 입력하기
    cin >> N;
    cin >> F;
    
    N = N - (N % 100);
    
    for(int i = 0;i < 100;i++){
        if((N + i) % F == 0){
            if (i < 10) cout << 0;
            cout << i;
            break;
        }
    }
    return 0;
}
