#include <iostream>

using namespace std;
template<typename T>
void interschimbare(T& first, T& second)
{
    T temp{first};
    first = second;
    second = temp;
}

 template<size_t maxSize>
 void interschimbare(char(&first)[maxSize], char(&second)[maxSize]) {
    for (size_t i = 0; i != maxSize; i++)
        swap(first[i], second[i]);
}
int main()
{
    int IntSwapNr1 = 15, IntSwapNr2 = 4;
    float FloatSwapNr1 = 12.1, FloatSwapNr2 = 6.6;
    char StringSwapNr1[] = "aBC", StringSwapNr2[] = "Abc";

    interschimbare(IntSwapNr1, IntSwapNr2);
    interschimbare(FloatSwapNr1, FloatSwapNr2);
    interschimbare(StringSwapNr1, StringSwapNr2);

    cout << IntSwapNr1 <<" "<< IntSwapNr2 <<'\n';
    cout << FloatSwapNr1 << " " <<FloatSwapNr2 <<'\n';
    cout << StringSwapNr1 << " " <<StringSwapNr2 <<'\n';
    return 0;
}
