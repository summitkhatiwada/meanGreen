//
//  Student.h
//  homework 2
//
/* Name: Aashish Pandey
 Course: CSCE 1040
 Instructor: Prof David Keathly
 Date: 10/14/2017
 Description: This program creates a simple grade book in which user can choose from menu options about what task they want to do like add student, add grade , add course etc.
 */

#ifndef Student_h
#define Student_h
#include<string>
using namespace std;

class Student{
    public:
    Student();//default constructor
    Student(string student_id, string student_name, string student_classification);
    void setStudentId( string NewstudentId); //mutator sets student id
    void setStudentName( string NewstudentName); //mutator sets student name
    void setStudentClassification( string NewstudentClassification); //mutator sets student classification
    string getStudentId() const;   //accessor accesses student id
    string getStudentName() const; //accessor accesses student name
    string getStudentClassification() const; //accessor accesses student id
    
    private:
    string studentId; // student id
    string studentName;// student name
    string studentClassification; // student classification
};

#endif /* Student_h */
