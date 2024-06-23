// 1233

#include <iostream>
using namespace std;

int main()
{
    int total[81]={0};
    int s1, s2, s3;         // 3개의 주사위의 면의 개수
    cin>>s1>>s2>>s3;
    
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                total[i+j+k]++;
            }
        }
    }
    
    int maxFrequency=0;
    int result=0;

    // 가장 높은 빈도로 나오는 합을 찾기
    for (int i=3;i<=s1+s2+s3;i++) {
        if (total[i] > maxFrequency) {
            maxFrequency=total[i];
            result=i;
        }
    }
    cout<<result<<endl;
    
    return 0;
}
