#include <iostream>

using namespace std;

template<typename T>
T getNrMax(T nr1, T nr2, T nr3) {
    if (nr1 >= nr2 && nr1 >= nr3)
        return nr1;
    else if (nr2 >= nr1 && nr2 >= nr3)
        return nr2;
    else
        return nr3;
        }
int main(){
int IntItemnr1 = 12, IntItemnr2 = 11, IntItemnr3 = 6;
    float FloatItemnr1 = 7.15, FloatItemnr2 = -12.1, FloatItemnr3 = 4.6;
    char CStringItemnr1[] = "abd", CStringItemnr2[] = "A0A", CStringItemnr3[] = "aBc";

    cout << getNrMax(IntItemnr1, IntItemnr2, IntItemnr3) <<endl;
    cout << getNrMax(FloatItemnr1, FloatItemnr2, FloatItemnr3) <<endl;
    cout << getNrMax(CStringItemnr1, CStringItemnr2, CStringItemnr3) <<endl;
    return 0;
}
