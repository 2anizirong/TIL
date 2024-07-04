// 2355

#include <iostream>
using namespace std;

int main()
{
    //int A, B;
    long A, B;
    cin >> A >> B;
    
    // 시간 초과가 뜨는 for 문입니다!
    /*for (int i = A; i <= B; i++) {
        sum += i;
    }*/
    
    // A부터 B까지의 합을 그냥 수학 식을 이용하여 계산
    // A와 B 중 누가 큰지 조건 나누는 것 중요!!
    if (A <= B)
		cout << (B - A + 1) * (B + A) / 2;
	else
		cout << (A - B + 1) * (B + A) / 2;

    return 0;
}
