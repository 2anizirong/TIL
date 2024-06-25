// 1252

#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b){
    int carry = 0;         // 올림수
    string result = "";    // 결과 문자열
    
    // 길이 맞추기 (b와 a 앞에 '0'을 추가)
    if(a.length()>b.length()){
        b=string(a.length()-b.length(), '0')+b;
    }
    else if(a.length()<b.length()){
        a=string(b.length()-a.length(), '0')+a;
    }
    
    for (int i=a.length()-1;i>=0;i--){
        int sum=(a[i]-'0')+(b[i]-'0')+carry;        // 현재 자리의 합에 이전 자리 올림을 더함
        carry=sum/2;                                // 자리 올림을 계산
        sum=sum%2;                                  // 현재 자리에 들어갈 숫자를 계산
        // result=(char)(sum+'0')+result;              // 결과 문자열에 현재 자리 숫자를 추가
        result = to_string(sum % 2) + result;
    }

    if (carry) {            // 마지막 자리 올림이 있으면 결과 문자열에 추가
        result='1'+result;
    }
    
    // 결과 문자열의 앞에 있는 모든 '0'을 제거하여 최종 결과를 만듦
    size_t startpos = result.find_first_not_of("0");
    if (startpos != string::npos) {
        return result.substr(startpos);
    }

    return "0";  // 예외 처리: 모두 '0'인 경우
}

int main()
{
    string bin1, bin2;
    cin>>bin1>>bin2;        // 이진수 두 개 입력
    
    cout<<addBinary(bin1,bin2)<<endl;
    
    return 0;
}
