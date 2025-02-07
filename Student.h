#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>

class Course;  // Forward declaration

using namespace std;

class Student {
    const int MAX_ALLOWED_COURSES = 18;
private:
    int id;
    string name;
    vector<int> enrolledCourses;  // Stores Course IDs


public:
    Student(int id, string name);

    int getId() const;
    int getMax() const;
    string getName() const;
    vector<int> getEnrolledCourses() const;

    bool takesCourse(const Course course);
    bool takeCourse(const Course course);
    void dropCourse(const Course course);

    void printDetails();
};

#endif  // STUDENT_H

