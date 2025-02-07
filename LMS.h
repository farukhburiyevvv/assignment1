#ifndef LMS_H
#define LMS_H

#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"

using namespace std;

class LMS {
private:
    string name;
    vector<Course> courses;
    vector<Student> students;

public:
    LMS(string name);

    void addStudent(Student student);
    void addCourse(Course course);
    void addStudentToCourse(int student_id, int  course_id);
    void printDetails();
};

#endif // LMS_H
