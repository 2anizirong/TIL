#include <iostream>
#define NUM 8
using namespace std;

int main()
{
    char chess[NUM][NUM];
    int cnt=0;      // 말의 개수를 세는 카운트
    
    // 체스판 항목들 입력하기
    for(int i=0;i<NUM;i++){
        for(int j=0;j<NUM;j++){
            cin>>chess[i][j];
            if((i%2==0 && j%2==0 && chess[i][j]=='F') 
            || (i%2!=0 && j%2!=0 && chess[i][j]=='F')) cnt++; 
        }
    }
    cout<<cnt<<endl;
    
    return 0;
}
