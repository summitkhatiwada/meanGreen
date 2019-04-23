//
//  Student.cpp
//  homework 2
//  Created by Aashish Pandey on 10/13/17.
//  Copyright © 2017 Aashish Pandey. All rights reserved.
//

//
#include<iostream>
#include "Student.h"
#include <string>
using namespace std;

//default constructor
Student::Student(){
    studentId="none";
    studentName="none";
    studentClassification="none";
    
}
// constructor
Student::Student(string student_id, string student_name, string student_classification){
    studentId = student_id;
    studentName = student_name;
    studentClassification = student_classification;
    return;
}
//mutator to set student id
void Student::setStudentId( string NewstudentId){
    studentId = NewstudentId;
    return;
}
//mutator to set student name
void Student:: setStudentName( string NewstudentName){
    studentName = NewstudentName;
    
    
}
//mutator to set student classification
void Student::setStudentClassification( string NewstudentClassification){
    studentClassification= NewstudentClassification;
    return;
    
}
// accessor to access the student id
string Student::getStudentId() const{
    return studentId;
    
}

//accessor to access the student name
string Student::getStudentName() const{
    return studentName;
}
// accessor to access the student classificaton
string Student::getStudentClassification() const{
    return studentClassification;
}
