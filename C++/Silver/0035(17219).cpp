// 17219
// map의 사용!

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    map<string, string> site;
    string savedSite, pwd;
    for (int i = 0; i < N; i++) {
        cin >> savedSite >> pwd;
        site[savedSite] = pwd;
    }
    
    for (int i = 0; i < M; ++i) {
        string findSite;
        cin >> findSite;
        cout << site[findSite] << '\n';
    }

    return 0;
}
