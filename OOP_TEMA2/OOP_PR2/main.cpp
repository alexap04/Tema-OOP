#include <iostream>
#include <cmath>
using namespace std;

int f(const float& n, const bool& isRoundedTo100 = false)
{
    if(isRoundedTo100){
        int nr = n;
        if(nr % 100 < 50)
            return nr - (nr % 100);
        else
            return nr + 100 - (nr % 100);
    }
    return n;
}
int main()
{
    float n = 563.67;
    cout << f(n) << endl;
    cout << f(n,true);
    return 0;
}
