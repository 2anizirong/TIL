// 1085

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, w, h;
    cin>>x>>y>>w>>h;
    
    int min1=min(x,y);
    int min2=min(min1, w-x);
    int min3=min(min2,h-y);
    
    cout<<min3<<endl;

    return 0;
}
