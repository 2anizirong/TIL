// 11650
// 시간 초과 때문에 직접 정렬을 통해 swap할 수 없었다!
// compare 함수를 통해 sort!

#include <iostream>
#include <algorithm>
using namespace std;

// 좌표 구조체 정의
struct Point {
    int x, y;
};

bool compare(const Point &a, const Point &b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main()
{
    int N;      // 점의 개수
    cin >> N;
    
    Point points[N];
    for (int i = 0; i < N; ++i) {
        cin >> points[i].x >> points[i].y;
    }
    
    // 좌표 정렬하기
    sort(points, points + N, compare);
    
    for (int i = 0; i < N; ++i) {
        cout << points[i].x << " " << points[i].y << '\n';
    }

    return 0;
}
