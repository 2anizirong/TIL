// 1225

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n1, n2;
    cin>>n1>>n2;

  // int total=0;
    long total=0;        // total을 처음에 int형으로 할당하였더니 틀렸다. 큰 수를 처리하지 못해서 그런 것 같아 long으로 자료형을 바꿨다.
    
    for(int i=0;i<n1.length();i++){
        for(int j=0;j<n2.length();j++){
            total+=(n1[i]-'0')*(n2[j]-'0');     // 문자에서 '0'을 빼서 실제 값으로 계산
        }
    }
    cout<<total;
    
    return 0;
}
