//
//  Course.h
//  homework 2
/* Name: Aashish Pandey
 Course: CSCE 1040
 Instructor: Prof David Keathly
 Date: 10/14/2017
 Description: This program creates a simple grade book in which user can choose from menu options about what task they want to do like add student, add grade , add course etc.
 */


#ifndef Course_h
#define Course_h
#include<string>
using namespace std;

class Course{
    public:
       Course(); //default constructor
    Course(string course_id, string course_name, string course_location, string course_time);//constructor
    void setCourseId(string newcourseId); //mutator sets the course id
    void setCourseName(string newcourseName); //mutator sets the course name
    void setCourseLocation(string newcourseLocation);//mutator sets the course location
    void setCourseTime(string newcourseTime); //mutator sets the course timing
    string getCourseId() const;  // accessor accesses the courseId
    string getCourseName() const; // accessor, accesses the course name
    string getCourseLocation() const; // accessor, accesses the course Location
    string getCourseTime() const; // accessor, accesses the course time
    
    
    
    private:
      string courseId; // course id
      string courseName; // course name
      string courseLocation;// course location
      string courseTime; // course time
};

#endif /* Course_h */
