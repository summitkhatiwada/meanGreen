//
//  Students.cpp
//  homework 2
//
//  Created by Aashish Pandey on 10/13/17.
//  Copyright © 2017 Aashish Pandey. All rights reserved.
//

#include <iostream>
#include "Students.h"
#include "Student.h"
#include <vector>


// adding student to the list
void Students::AddStudentToList(Student newstudent){
    studentlist.push_back(newstudent);
    };

//printing the list of students from the list
void Students::PrintList() const{
    cout<<"*****LIST OF ALL STUDENTS*****"<<endl;
    if (studentlist.size() ==0){
        cout<<"List is Empty"<<endl;}
    
    for (unsigned i = 0; i < studentlist.size(); i++){
        cout<<"Name: "<<studentlist.at(i).getStudentName()<<"  Student ID:"<<studentlist.at(i).getStudentId()<<"  Classification: "<<studentlist.at(i).getStudentClassification()<<endl;
        
    }
}

