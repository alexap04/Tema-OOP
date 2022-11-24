#include <iostream>

using namespace std;

///PROBLEMA 1
void swapElem(int &x, int &y)
{
    int t=x;
    x=y;
    y=t;
}



///PROBLEMA 2
#include <cmath>
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


///PROBLEMA 3
#include <string>
struct Student{
    string st_name;
    unsigned int st_grade;
};

template <typename T>

T Max(T x, T y){
 return x.st_grade < y.st_grade ? y : x;
}


///PROBLEMA 4


///PROBLEMA 5
#include <cstring>
int getSize(int a)
{
    return sizeof(a);
}
int getSize(double a)
{
    return sizeof(a);
}
int getSize(char* a)
{
    int length= strlen(a);
    return length;
}


///PROBLEMA 7
struct nrComplex
{
    double real, imaginar;
};
double Modulus(const nrComplex& num)
{
    return sqrt(pow(num.real, 2) + pow(num.imaginar, 2));
}

double Modulus(const double& real, const double& imaginar)
{
    return sqrt(pow(real, 2) + pow(imaginar, 2));
}


///PROBLEMA 8

template<typename T>
T getNrMax(T nr1, T nr2, T nr3) {
    if (nr1 >= nr2 && nr1 >= nr3)
        return nr1;
    else if (nr2 >= nr1 && nr2 >= nr3)
        return nr2;
    else
        return nr3;
}


///PROBLEMA 9

template<typename T>
T Suma(T nr1, T nr2)
{
    return nr1 + nr2;
}


///PROBLEMA 10

template<typename T>
void interschimbare(T& first, T& second)
{
    T temp{first};
    first = second;
    second = temp;
}
template<size_t maxSize>
void interchangeData(char(&first)[maxSize], char(&second)[maxSize]) {
    for (size_t i = 0; i != maxSize; ++i)
        swap(first[i], second[i]);
}


double f(const double& nr1, const double& nr2, const char& operation)
{
	switch(operation)
	{
	case '+':
        return nr1 + nr2;
	case '-':
        return nr1 - nr2;
	default:
        cerr << "Error: Invalid operation";
        return numeric_limits<double>::min();
	}
}
int main()
{
    /* T2 pr1
    int a,b;
    cin>>a>>b;
    swapElem(a,b);
    cout<<a<<" "<<b;
    */

    /*  T2 pr2
    float n = 55.67;
    cout << f(n) << endl;
    cout << f(n,true) ;
    return 0;
*/

/*  T2 pr3
    Student x, y;
    x.st_grade=8;
    y.st_grade=6;
    cout<<Max(x,y).st_grade;
*/

/* T2 pr4  */

/* T2 pr5
int ovLoad=5;
double ovLoadDouble=100.56;
char ovLoadString[] = "stringexample";

cout<<getSize(ovLoad)<<endl;
cout<<getSize(ovLoadDouble)<<endl;
cout<<getSize(ovLoadString);

return 0;
*/

/* T2 pr7
nrComplex numarComplex{ 9.6,11.2 };
    double complexReal = 9.6, complexImaginar = 11.2;
    cout<< Modulus(numarComplex)<<endl<<Modulus(complexReal, complexImaginar)<<endl;
    */


/*T2 pr8
    int IntItemnr1 = 5, IntItemnr2 = 10, IntItemnr3 = 8;
    float FloatItemnr1 = 3.0f, FloatItemnr2 = 6.5f, FloatItemnr3 = -2.9f;
    char CStringItemnr1[] = "aaa", CStringItemnr2[] = "xyz", CStringItemnr3[] = "abc";
    Student StudentItemnr1 = { "Ionut", 20, 6.1f }, StudentItemnr2 = { "Cristian", 21, 8.6f }, StudentItemnr3 = { "Daniel", 21, 7.9f };

    cout << getNrMax(IntItemnr1, IntItemnr2, IntItemnr3) <<endl;
    cout << getNrMax(FloatItemnr1, FloatItemnr2, FloatItemnr3) <<endl;
    cout << getNrMax(CStringItemnr1, CStringItemnr2, CStringItemnr3) <<endl;
    cout << getNrMax(StudentItemnr1, StudentItemnr1, StudentItemnr3) <<endl;

*/

/*T2 pr9
    int a = 11, b = 3;
    cout << Suma(a,b) <<endl;
*/

/*T2 pr10
    int IntSwapNr1 = 5, IntSwapNr2 = 10;
    float FloatSwapNr1 = 3.0f, FloatSwapNr2 = 6.5f;
    char StringSwapNr1[] = "aaa", StringSwapNr2[] = "xyz";
///    Student firstStudentSwap = { "Ionut", 20, 6.1f }, secondStudentSwap = { "Cristian", 21, 8.6f };

    interschimbare(IntSwapNr1, IntSwapNr2);
    interschimbare(FloatSwapNr1, FloatSwapNr2);
    interschimbare(StringSwapNr1, StringSwapNr2);
/// interschimbare(firstStudentSwap, secondStudentSwap);

    cout << IntSwapNr1 <<" "<< IntSwapNr2 << '\n';
    cout << FloatSwapNr1 << " " <<FloatSwapNr2 << '\n';
    cout << StringSwapNr1 << " " <<StringSwapNr2 << '\n';
///  cout << firstStudentSwap << "\t secondIntSwap = " << secondStudentSwap << '\n';

*/

    double firstNum = 15.3, secondNum = 22.5;
    char operation = '+';
    double(*p_f)(const double&, const double&, const char&);
    p_f = &f;
    cout << firstNum << ' ' << operation << ' ' << secondNum <<" "<< p_f(firstNum, secondNum, operation) <<endl;
}
