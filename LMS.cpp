#include "LMS.h"
#include <iostream>

using namespace std;

LMS::LMS(string name) {
    this->name = std::move(name);
}

void LMS::addStudent(Student student) {
    students.push_back(student);
}

void LMS::addCourse(Course course) {
    courses.push_back(course);
}

void LMS::addStudentToCourse(int student_id, int course_id) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses[i].getId() == course_id) {
            for (int j = 0; j < students.size(); j++) {
                if (students[j].getId() == student_id) {
                    students[j].takeCourse(courses[i]);
                    courses[i].addStudent(students[j]);
                }
            }
        }
    }
}

void LMS::printDetails()  {
    cout<<"LMS Name: "<<name<<endl;
    cout<<"Students: "<<endl;
    for (int i = 0; i < students.size(); i++) {
        students[i].printDetails();
    }
    cout<<"Courses: "<<endl;
    for (int i = 0; i < courses.size(); i++) {
        courses[i].printDetails();
    }

}
