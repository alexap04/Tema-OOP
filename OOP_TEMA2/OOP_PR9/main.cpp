#include <iostream>

using namespace std;

template<typename T>
T Suma(T nr1, T nr2)
{
    return nr1 + nr2;
}

int main(){
    int a = 11, b = 3; ///int type
    cout << Suma(a,b) <<endl;


    return 0;
}
