// 10814
// 시간 초과를 고려하기!!

// 처음 코드
#include <iostream>
#include <string>
using namespace std;

// 회원 정보를 담는 구조체
struct Member {
    int age; 
    string name;
    int order;
};

bool memberCompare(const Member& a, const Member& b) {
    if (a.age == b.age) {
        return a.order < b.order; // 나이가 같으면 입력 순서로 비교
    }
    return a.age < b.age; // 나이 순으로 비교
}

int main() 
{
    int N;
    cin >> N; 

    Member members[N]; // 회원 정보를 담는 구조체 배열

    for (int i = 0; i < N; ++i) {
        cin >> members[i].age >> members[i].name; // 나이와 이름
        members[i].order = i; // 입력 순서
    }

    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (memberCompare(members[j], members[i])) {
                swap(members[i], members[j]);
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << members[i].age << " " << members[i].name << endl; // 나이와 이름 출력
    }

    return 0;
}

// ----------------------------------------------------------------------------------------
// swap하는 부분을 직접 swap하지 않고 #include <algorithm>에서의 sort를 사용하여 순서를 정렬하기!!
// endl 대신 '\n'로 개행하기!!

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// 회원 정보를 담는 구조체
struct Member {
    int age; 
    string name;
    int order;
};

bool memberCompare(const Member& a, const Member& b) {
    if (a.age == b.age) {
        return a.order < b.order; // 나이가 같으면 입력 순서로 비교
    }
    return a.age < b.age; // 나이 순으로 비교
}

int main() 
{
    int N;
    cin >> N; 

    Member members[N]; // 회원 정보를 담는 구조체 배열

    for (int i = 0; i < N; ++i) {
        cin >> members[i].age >> members[i].name; // 나이와 이름
        members[i].order = i; // 입력 순서
    }

    sort(members, members + N, memberCompare);

    for (int i = 0; i < N; ++i) {
        cout << members[i].age << " " << members[i].name << '\n'; // 나이와 이름 출력
    }

    return 0;
}
