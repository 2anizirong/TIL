// 10989

#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt[10001] = { 0 };
	int N;
	cin >> N;
    
    int count;
	for (int i = 0; i < N; i++) {
		cin >> count;
		cnt[count]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (cnt[i])
			for (int j = 0; j < cnt[i]; j++)
        // cout << i << endl;
        // '\n' 은 단순히 개행을 해주지만 endl 의 경우 내부 버퍼를 비워주는 역할도 함께한다.
        // 따라서 '\n' 이 더 빠른 속도로 개행을 수행할 수 있다.
				cout << i << '\n';
	}
	return 0;
