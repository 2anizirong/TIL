// 15596

#include <iostream>
#include <vector>
using namespace std;

/* long long sum(std::vector<int> &a);
a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열
리턴값: a에 포함되어 있는 정수 n개의 합 */

long long sum(vector<int> &a);

int main()
{
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << sum(a) << '\n';

    return 0;
}

long long sum(vector<int> &a)
{
    long long ans = 0;
    for (int i = 0; i < a.size(); i++) {
        ans += a[i];
    }
    
    return ans;
}
