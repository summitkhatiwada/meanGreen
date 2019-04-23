//
//  Courses.cpp
//  homework 2
//
//  Created by Aashish Pandey on 10/13/17.
//  Copyright © 2017 Aashish Pandey. All rights reserved.
//

#include <iostream>
#include "Courses.h"
#include "Course.h"
#include <vector>

// adding courses to the list
void Courses::AddCourseToList(Course newcourse){
    courselist.push_back(newcourse);
};
// printing all the courses from the list
void Courses::PrintList() const{
    cout<<"*****LIST OF ALL COURSES*****"<<endl;
    if (courselist.size() ==0){
        cout<<"List is Empty"<<endl;}
    
    for (unsigned i = 0; i < courselist.size(); i++){
        cout<<"Name: "<<courselist.at(i).getCourseName()<<"  Course ID:"<<courselist.at(i).getCourseId()<<"  Location: "<<courselist.at(i).getCourseLocation()<<" Time: "<<courselist.at(i).getCourseTime()<<endl;
    }
    
    
    
}
