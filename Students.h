//
//  Students.h
//  homework 2
//
//  Created by Aashish Pandey on 10/13/17.
//  Copyright © 2017 Aashish Pandey. All rights reserved.
//

#ifndef Students_h
#define Students_h


#include <iostream>
#include "Student.h"
#include <vector>

class Students{
public:
    void AddStudentToList(Student newstudent);// takes a student as a parameter and add it to a list of studnets
    void PrintList() const; //member function which prints the list of student added to the list
    
    
    vector <Student> studentlist;
};


#endif /* Students_h */
