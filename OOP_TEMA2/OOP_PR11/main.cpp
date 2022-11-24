#include <iostream>

using namespace std;

int fsuma(int& x, char& sir, int& y){
    if (sir == '+')
        return x + y;
    else if (sir == '-')
            return x - y;
}

int main(){
int  x, y;
    char sir;
    cin >>x>>sir>>y;
    cout << fsuma(x, sir, y);
    return 0;
}
