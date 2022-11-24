#include<string>
#include <iostream>
#include <vector>
using namespace std;

class Student{
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
    void display() {
        cout << name << " " << grade << endl;
    }
};

int main() {
    vector<Student> v;
    Student s;
    int n;
    string name;
    double grade;
    cout << "no of students is:";
    cin >> n;
    cout << endl << "name,grade:";
    for (int i = 0; i < n; i++) {
        cin >> name >> grade;
        s.getter(name, grade);
        v.push_back(s);
    }
    for (int i = 0; i < n-1; i++) {
        if (v[i].getGrade() > v[i + 1].getGrade()) {
            Student aux;
            aux.getter(v[i].getName(), v[i].getGrade());
            v[i].getter(v[i + 1].getName(), v[i + 1].getGrade());
            v[i+1].getter(aux.getName(), aux.getGrade());
        }
    }
    for (int i = 0; i < n; i++) {
        v[i].display();
    }
    return 0;
}
