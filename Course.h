#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <vector>

class Student;  // Forward declaration

using namespace std;

class Course {
private:
    int id;
    string name;
    int credits;
    vector<int> students;  // Store pointers to Student objects

public:
    Course(int id, string name, int credits);

    int getId() const;
    string getName() const;
    int getCredits() const;

    bool hasStudent(Student student);
    bool addStudent(Student student);
    void dropStudent(Student student);
    void printDetails() const;
};

#endif  // COURSE_H
