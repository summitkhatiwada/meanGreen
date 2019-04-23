// Enrollment.cpp
//Homework 2
/* Name: Aashish Pandey
 Course: CSCE 1040
 Instructor: Prof David Keathly
 Date: 10/14/2017
 Description: This program creates a simple grade book in which user can choose from menu options about what task they want to do like add student, add grade , add course etc.
 */

#include<iostream>
#include"Enrollment.h"
#include <string>
using namespace std;

unsigned int total;
int newgrades;
// constructors
Enrollment::Enrollment (string studentid, string courseid){
    studentId= studentid;
    courseId = courseid;
    }
Enrollment::Enrollment( string studentid, string courseid, vector<int> grades){
    studentId= studentid;
    courseId= courseid;
    tgrades = grades;
}

//mutators
void Enrollment::SetEnrollmentId(string enrollmentid){
    enrollmentId= enrollmentid;
    return;}
string Enrollment::GetEnrollmentId()const{
    return enrollmentId;
}


void Enrollment::SetStudentId(string newstudentid){
    studentId=newstudentid;
    return;}

void Enrollment::SetCourseId(string newcourseid){
    courseId = newcourseid;
    return;}

void Enrollment::SetAverageGrade(double newaverage){
    for(unsigned i=0; i <tgrades.size();i++){
        total = total + tgrades.at(i);
        }
    averageGrade= total /tgrades.size();
    }

void Enrollment::SetLetterGrade(string newletter){
    if (GetAverageGrade()>89){ letterGrade= "A";}
    else if (GetAverageGrade()>79 && GetAverageGrade()<90){letterGrade="B";}
    else if (GetAverageGrade()>69 && GetAverageGrade()<80){letterGrade= "C";}
    else if (GetAverageGrade()>59 && GetAverageGrade()<70){letterGrade="D";}
    else{letterGrade="F";}
    return;}
    
    
void Enrollment::SetGrades(int newgrades){
 tgrades.push_back(newgrades);}
//accessors to get the Studentid courseid average grade and letter grade

string Enrollment::GetStudentId()const{ return studentId;}

string Enrollment::GetCourseId()const{ return courseId;}

double Enrollment::GetAverageGrade()const{return averageGrade;}

 string Enrollment::GetLetterGrade()const{return letterGrade;}




