// 1076

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
색       값   곱
black    0    1
brown    1    10
red      2    100
orange   3    1000
yellow   4    10000
green    5    100000
blue     6    1000000
violet   7    10000000
grey     8    100000000
white    9    1000000000
*/

int main()
{
    string colors[10] = {"black", "brown", "red", "orange",
    "yellow", "green", "blue", "violet", "grey", "white"};
    
    string choose[3];
    long result = 0;
    
    for(int i = 0;i < 3;i++) cin >> choose[i];
    for(int j = 0;j < 10;j++) 
        if(choose[0] == colors[j]){
            result += j * 10;  // 첫 번째 색은 10의 자리
            break;
        }
    for(int k = 0;k < 10;k++) 
        if(choose[1] == colors[k]){
            result += k;
            break;
        }
    for(int l = 0;l < 10;l++){
        if(choose[2] == colors[l]){
            result *= pow(10, l);  // 세 번째 색의 값만큼 10의 거듭제곱
            break;
        }
    }
    cout << result << endl;
    
    return 0;
}
