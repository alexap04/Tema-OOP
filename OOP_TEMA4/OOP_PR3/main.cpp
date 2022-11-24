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
    void findGreatest() {
        string nume="Nu exista!";
        for (Student* Student : this->studentList) {
            if (Student->getGrade()==5) {
                nume = Student->getName();
            }
        }
        cout << nume;
    }


};
int main()
{
    StudentList* friendsGroup;
    friendsGroup = new StudentList();
    friendsGroup->addStudent(new Student(9, "Maria"));
    friendsGroup->addStudent(new Student(7, "George"));
    friendsGroup->addStudent(new Student(8, "Andrei"));
    friendsGroup->addStudent(new Student(5, "Dana"));

    friendsGroup->afisare();
    friendsGroup->findGreatest();


    return 0;
}
