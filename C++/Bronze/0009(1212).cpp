// 1212

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num8to2[8]={"000","001","010","011","100","101","110","111"};
    
    string num8;
    cin>>num8;          // 8진수 입력
    int index=0;
    
    for(int i=0;i<num8.length();i++){
        index=num8[i]-'0';
        if(i==0) cout<<stoi(num8to2[index]);
        // stoi 함수는 string을 int형으로 바꿔주는 함수
        else cout<<num8to2[index];
        
    }
    
    return 0;
}
