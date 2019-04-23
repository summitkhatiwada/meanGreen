//
//  Enrollments.h
//  homework 2
//
//  Created by Aashish Pandey on 10/13/17.
//  Copyright © 2017 Aashish Pandey. All rights reserved.
/* Name: Aashish Pandey
 Course: CSCE 1040
 Instructor: Prof David Keathly
 Date: 10/14/2017
 Description: This program creates a simple grade book in which user can choose from menu options about what task they want to do like add student, add grade , add course etc.
 */

#ifndef Enrollments_h
#define Enrollments_h

#include <iostream>
#include <string>
#include <vector>
#include "Enrollment.h"
using namespace std;

class Enrollments {
public:
    //member functions for finding and printing different enrollment details
    void averageforacourse(string courseid);
    void AverageForStudentCourse( string studentid,string courseid);
    void AddEnrollmentToList(Enrollment newenrollment);
    void AddStudentCourseGradeList(Enrollment fulllist);
    void PrintStudentsInACourse( string course_id) const;
    void PrintStudentCourseGradeList(string studentid, string courseid)const;
    void PrintList() const;
    void AddGradesForaStudentToCourse();
    vector <Enrollment> enrollmentlist; // vector for  enrollments
    vector <int> grades;
    vector <Enrollment> vfulllist;
    void StoreGradeBook();//member function storing the data to grade book
    void LoadGradeBook(); // member function to load the data from gradebook
    
    
};


#endif /* Enrollments_h */
