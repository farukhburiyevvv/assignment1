#include "Student.h"
#include "Course.h"

Student::Student(int id, string name) {
    this->id = id;
    this->name = std::move(name);
}


int Student::getId() const {
    return id;
}

string Student::getName() const {
    return name;
}

vector<int> Student::getEnrolledCourses() const {
    return enrolledCourses;
}

bool Student::takesCourse(Course course) {
    for (int i = 0; i < enrolledCourses.size(); i++) {
        if (enrolledCourses[i] == course.getId()) {
            return true;
        }
    }
    return false;
}

bool Student::takeCourse(Course course) {
    int allowed = MAX_ALLOWED_COURSES;
    for (int i = 0; i < enrolledCourses.size(); i++) {
        allowed -= course.getCredits();
    }
    if (allowed > 0) {
        enrolledCourses.push_back(course.getId());
        return true;
    }

    return false;
}

void Student::dropCourse(Course course) {
    enrolledCourses.pop_back();
}

void Student::printDetails() {
    cout << "Student ID: " << getId() << ", Name: " << getName() << endl;
    cout << "Enrolled Courses: ";
    for (int i = 0; i < enrolledCourses.size(); i++) {
        cout << enrolledCourses[i] << " ";
    }
    cout<<endl;
}
