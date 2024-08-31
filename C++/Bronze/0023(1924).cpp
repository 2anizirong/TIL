// 1924

#include <iostream>
using namespace std;

// 2007년 1월 1일은 월요일
int main()
{
    int month, day;
    cin >> month >> day;
    
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int totalDay = 0;
    for (int i = 0; i < month - 1; i++) {
        totalDay += months[i];
    }
    totalDay += day;
    
    if (totalDay % 7 == 0) cout << "SUN" << endl;
    else if (totalDay % 7 == 1) cout << "MON" << endl;
    else if (totalDay % 7 == 2) cout << "TUE" << endl;
    else if (totalDay % 7 == 3) cout << "WED" << endl;
    else if (totalDay % 7 == 4) cout << "THU" << endl;
    else if (totalDay % 7 == 5) cout << "FRI" << endl;
    else if (totalDay % 7 == 6) cout << "SAT" << endl;

    return 0;
}
