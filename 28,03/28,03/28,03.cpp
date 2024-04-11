#include <iostream>
#include <map>
#include <string>

using namespace std;

class Student {
public:
    string name;
    float averageGrade;

    Student(string _name, float _averageGrade) : name(_name), averageGrade(_averageGrade) {}
};

int main() {
    map<Student, float> studentGrades;

    studentGrades[Student("Andrei", 4.5)] = 85.0;
    studentGrades[Student("Tyoma", 3.8)] = 75.5;
    studentGrades[Student("Senya", 4.2)] = 80.3;
    studentGrades[Student("Lionya", 4.7)] = 90.1;
    studentGrades[Student("Sanya", 3.9)] = 78.2;

    string searchName = "Bob";
    for (const auto& pair : studentGrades) {
        if (pair.first.name == searchName) {
            cout << "Знайдено студента " << searchName << ". Середній бал: " << pair.second << endl;
            break;
        }
    }

    return 0;
}
