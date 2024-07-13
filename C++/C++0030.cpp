// 1259

#include <iostream>
using namespace std;

int main()
{
    while (true) {
        string num;
        cin >> num;
        
        if (num == "0") {
            break;
        }
        
        bool isPalindrome = true;
        for (int i = 0; i < num.length() / 2; i++) {
            if (num[i] != num[num.length() - 1 - i]) {
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    return 0;
}
