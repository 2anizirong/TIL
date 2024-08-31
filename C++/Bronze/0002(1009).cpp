// 1009

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;         // 테스트 케이스의 개수
    
    int a,b;
    int data;
    
    for(int i=0;i<T;i++){
        data=1;
        
        cin>>a>>b;
        
        for(int i=0;i<b;i++){
            data=(data*a)%10;
        }
        if(data==0) cout<<10<<endl;
        else cout<<data<<endl;
    }
    return 0;
}
