//
//  Courses.h
//  homework 2
/* Name: Aashish Pandey
 Course: CSCE 1040
 Instructor: Prof David Keathly
 Date: 10/14/2017
 Description: This program creates a simple grade book in which user can choose from menu options about what task they want to do like add student, add grade , add course etc.
 */

#ifndef Courses_h
#define Courses_h

#include <iostream>
#include "Course.h"
#include <vector>

class Courses{
public:
    void AddCourseToList(Course newcourse);// member function which takes a course as parameter and add that course to list
    void PrintList() const;// prints the list of all courses added
    
    vector <Course> courselist; // vector to store the course list
};


#endif /* Courses_h */
