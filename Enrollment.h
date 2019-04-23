

#ifndef Enrollment_h
#define Enrollment_h
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Enrollment{
public:
    Enrollment(string studentid, string courseid);//default constructor
    //mutators to change or set the enrollment informations
    void SetStudentId(string newstudentId);
    void SetCourseId(string newcourseId);
    void SetAverageGrade(double newaverage);
    void SetLetterGrade(string newletter);
    void SetGrades( int newgrades);
    //accessors to access the enrollment informations
    string GetStudentId()const;
    string GetCourseId()const;
    double GetAverageGrade()const;
    string GetLetterGrade()const;
    void SetEnrollmentId(string enrollmentid);
    string GetEnrollmentId() const;
    Enrollment( string studentid, string courseid, vector<int> grades);// constructor
    
    
    
private:
    string enrollmentId;
    string studentId;
    string courseId;
    string letterGrade;
    double averageGrade;
    vector <int> tgrades;// vector of ten grades for a student in a course
    
};


#endif /* Enrollment_h */
