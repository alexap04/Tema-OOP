#include <iostream>
#include <string>
#include<list>
using namespace std;
class Student {
private:
    int Grade;
    string name;
public:
    Student(int Grade, string name) {
        this->Grade = Grade;
        this->name = name;
    }
    void setGrade(int n) {
        this->Grade = n;
    }
    int getGrade() {
        return this->Grade;
    }
    string getName() {
        return this->name;
    }
    void setName(string name) {
        this->name = name;
    }
};
class StudentList {
private:
    list<Student*> studentList;
public:
    void addStudent(Student* addFr) {
        this->studentList.push_back(addFr);
    }
    list<Student*> getstudentList() {
        return this->studentList;
    }
    void afisare() {
        for (Student* Student : this->studentList) {
            cout << Student->getName() << " " << Student->getGrade() << endl;
        }
    }
    void findGreatest(){
        int Maxx = 0;
        string name;
        for (Student* Student : this->studentList) {
            if (Student->getGrade() > Maxx) {
                name = Student->getName();
                Maxx = Student->getGrade();
            }
        }
        cout << name;
    }


};
int main()
{
    StudentList* friendsGroup;
    friendsGroup = new StudentList();
    friendsGroup->addStudent(new Student(21, "Andrei"));
    friendsGroup->addStudent(new Student(20, "Maria"));
    friendsGroup->addStudent(new Student(18, "George"));
    friendsGroup->addStudent(new Student(30, "Dana"));

    friendsGroup->afisare();
    friendsGroup->findGreatest();


    return 0;
}
