// 1225

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n1, n2;
    cin>>n1>>n2;
    
    // int total=0;
    long total=0;      // int로 하니까 큰 수까지 처리가 안되었는지 틀렸다. 그래서 long으로 변경하였다.
    
    for(int i=0;i<n1.length();i++){
        for(int j=0;j<n2.length();j++){
            total+=(n1[i]-'0')*(n2[j]-'0');     // 문자에서 '0'을 빼서 실제 값으로 계산산
        }
    }
    cout<<total;
    
    return 0;
}
