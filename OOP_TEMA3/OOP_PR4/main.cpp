#include <iostream>
#include <list>
#include<string>
#include <vector>

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
    double getMedie() {
        return grade;
    }
    int checkGrade(double gradech) {
        if (gradech>grade)
            return 1;
        if (gradech== grade)
            return 2;
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
    double maxx=0;
    list<string> lista;
    for (int i = 0; i < n; i++) {
        if (v[i].checkGrade(maxx) == 0) {
            maxx = v[i].getMedie();
            lista.clear();
            lista.push_back(v[i].getName());
        }
        else
            if (v[i].checkGrade(maxx) == 2)
                lista.push_back(v[i].getName());
    }

    for (auto j = lista.begin(); j != lista.end(); j++) {
        cout << *j;
    }
}
