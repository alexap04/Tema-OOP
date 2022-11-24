#include <iostream>
#include <string>
using namespace std;

struct Student{
    string st_name;
    unsigned int st_grade;
};

template <typename T>
    T Max(T x, T y){
        if(x.st_grade < y.st_grade)
            return y;
        return x;
    }

int main(){
    Student x,y;
    x.st_grade=7;
    y.st_grade=9;
    cout<<Max(x,y).st_grade;
    return 0;
}
