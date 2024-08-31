// 4153

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    while (true) {
        int a, b, c;
        cin >> a; cin >> b; cin >> c;
        
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        
        int sides[3] = {a, b, c};
        sort(sides, sides + 3);

        if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
    
    return 0;
}
