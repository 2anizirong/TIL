// 2750

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> num(N); // 벡터를 사용하여 동적으로 크기를 할당
    
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    
    sort(num.begin(), num.end()); // 벡터의 begin과 end 사용
    
    for (int i = 0; i < N; i++) {
        cout << num[i] << endl;
    }

    return 0;
}
