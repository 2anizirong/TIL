// 1764

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // 듣지 못한 사람 N, 보지 못한 사람 M
    int N, M;
    cin >> N >> M;
    
    string *notHear = new string[N];
    string *notSee = new string[M];
    for (int i = 0; i < N; i++) {
        cin >> notHear[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> notSee[i];
    }
    
    // 듣잡, 보잡 모두 정렬
    sort(notHear, notHear + N);
    sort(notSee, notSee + M);
    
    // 듣보잡 저장 배열
    string *total = new string[min(N, M)];
    int count = 0;
    
    int i = 0, j = 0;
    while (i < N && j < M) {
        if (notHear[i] == notSee[j]) {
            total[count++] = notHear[i];
            ++i; ++j;
        } 
        else if (notHear[i] < notSee[j]) ++i;
        else ++j;
    }
    
    cout << count << '\n';
    for (int i = 0; i < count; i++) cout << total[i] << '\n';

    return 0;
}
