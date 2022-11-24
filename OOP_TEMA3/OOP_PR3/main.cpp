#include<string>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Student {
    string name;
    double grade;
public:

    void getter(string name, double grade) {
        this->name = name;
        this->grade = grade;
    }
    string getName() {
        return name;
    }
    double getGrade() {
        return grade;
    }
    int checkName(string elev) {
        if (name == elev)
            return 1;
        return 0;
    }
};

int main()
{

    vector<Student> v;
    Student s;
    int n;
    string name;
    double grade;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> grade;
        s.getter(name, grade);
        v.push_back(s);
    }
    string elev;
    cin >> elev;
    for (int i = 0; i < n; i++) {
        if (v[i].checkName(elev) == 1) {
            cout << "da";
            return 0;
        }
    }
    cout << "nu";

}
