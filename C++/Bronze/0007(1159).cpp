// 1159

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin>>N;  // 선수의 수
    
    string name[N];
    // 아스키 코드 : a 97 ~ z 122
    int alpha[26]={0};
    
    for (int i=0;i<N;i++) {
        cin>>name[i];  // 선수들 이름 모두 입력
        alpha[name[i][0]-'a']++;
    }
    
    bool found=false;
    for (int i=0;i<26;i++) {
        if (alpha[i]>=5) {
            cout<<(char)(i+'a');
            found=true;
        }
    }
    if (!found) {
        cout<<"PREDAJA";
    }
    
    return 0;
}
