#include <iostream>
using namespace std;
void swapF(int &x, int &y)
{
    int t=x;
    x=y;
    y=t;
}
int main(){

    int x,y;
    cin>>x>>y;
    swapF(x,y);
    cout<<x<<" "<<y;
    return 0;
}
