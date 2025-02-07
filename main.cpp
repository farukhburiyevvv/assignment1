#include <iostream>
#include "Course.h"
#include "LMS.h"
#include "Student.h"

using namespace std;

int main() {
    // LMS myLms("SmallLms");
    //
    // Student s1(1,"Alice");
    // Student s2(2,"Alic");
    // Student s3(3,"Ali");
    //
    // Course c1(101,"MATH",6);
    // Course c2(102,"HASS",5);
    // Course c3(103,"ENGLISH",4);
    //
    // myLms.addCourse(c1);
    // // myLms.addCourse(c2);
    // // myLms.addCourse(c3);
    //
    // myLms.addStudent(s1);
    // // myLms.addStudent(s2);
    // // myLms.addStudent(s3);
    //
    // myLms.addStudentToCourse(s1,c1);
    // // myLms.addStudentToCourse(s2,c1);
    // // myLms.addStudentToCourse(s2,c2);
    // // myLms.addStudentToCourse(s3,c3);
    //
    // // s1.printDetails();
    // // s1.takeCourse(c1);
    // // s1.takesCourse(c2);
    //
    // // c1.addStudent(s1);
    // // c1.hasStudent(s1);
    //
    //
    // myLms.printDetails();

    string nameLMS;
    getline(cin,nameLMS);
    LMS myLMS(nameLMS);
    int number_students;
    cin>>number_students;
    //Add students
    for(int i=0;i<number_students;i++){
        int id;
        string name;
        cin>>id>>name;
        Student s1(id, name);
        myLMS.addStudent(s1);
    }
    // Add courses
    int number_courses;
    cin>>number_courses;
    for(int i=0;i<number_courses;i++){
        string name;
        int credit;
        int id;
        cin>>id>>name>>credit;
        Course c1(id, name, credit);
        myLMS.addCourse(c1);
    }
    // Enroll students in courses
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int student_id;
        int course_id;
        cin>>student_id>>course_id;
        myLMS.addStudentToCourse(student_id, course_id);
    }
    // Print LMS details
    myLMS.printDetails();

    return 0;
}