//
//  Enrollments.cpp
//  homework 2
//

/* Name: Aashish Pandey
 Course: CSCE 1040
 Instructor: Prof David Keathly
 Date: 10/14/2017
 Description: This program creates a simple grade book in which user can choose from menu options about what task they want to do like add student, add grade , add course etc.
 */
//

#include <iostream> //inclusion of input and output
#include <vector> // includes vector
#include "Enrollments.h"// includes Enrollment and Enrollment class to main
#include "Enrollment.h"
#include <string>
#include <fstream>

//variable initilization
string student_id, course_id;
int grade;
double atotal;
double btotal;
int counter;
using namespace std;

//adding enrollment informaiton to the list
void Enrollments::AddEnrollmentToList(Enrollment newenrollment){
    enrollmentlist.push_back(newenrollment);
}

//printing the list of enrollment
void Enrollments::PrintList() const{
    for (unsigned i = 0; i< enrollmentlist.size(); i++){
        cout<<" student id: "<< enrollmentlist.at(i).GetStudentId()<<" course id: "<<enrollmentlist.at(i).GetCourseId()<<endl;
    }
    return;
    }

//function for adding grades fora student to a course
void Enrollments::AddGradesForaStudentToCourse(){
    cout<<":::Add grades for a student in a course:::"<<endl;
    cout<< "Enter the student id"<<endl;
    cin>>student_id;
    cout<<"Enter the course id"<<endl;
    cin>> course_id;
    for (unsigned i = 0; i< enrollmentlist.size(); i++){
        if ( student_id== enrollmentlist.at(i).GetStudentId() && course_id== enrollmentlist.at(i).GetCourseId()){
            for (i=0; i<10; i++){
                cout<< "enter a grade"<<endl;
                cin>>grade;
                grades.push_back(grade);
            }
        }
    }
    
    Enrollment fulllist( student_id, course_id, grades); // calling for a constructor
    AddStudentCourseGradeList(fulllist);
        
    }
// adding student courses and grade to diffetent list
void Enrollments::AddStudentCourseGradeList(Enrollment wgrades){
    vfulllist.push_back(wgrades);
    }

// function for printing the student course and grades
void Enrollments::PrintStudentCourseGradeList(string studentid, string courseid) const{
   
    for(unsigned i=0; i< vfulllist.size(); i++){
        if( studentid==vfulllist.at(i).GetStudentId() && courseid==vfulllist.at(i).GetCourseId()){
            cout<<"The grades of student: "<<studentid<<" in course: "<<courseid<<" are :"<<endl;
            for (int j = 0; j < 10; j++){
                cout << grades.at(i);
            }

        }}}
// functin for printing the list  students in a course
void Enrollments::PrintStudentsInACourse( string course_id) const{
    cout<<"the list of student id of students enrolled in "<< course_id<< " is "<<endl;
    for (unsigned i = 0; i < enrollmentlist.size(); i++){
        if (course_id== enrollmentlist.at(i).GetCourseId()){
            cout<<enrollmentlist.at(i).GetStudentId()<<endl;
             
        }
    }
}
// function for finding a average for a student
void Enrollments::AverageForStudentCourse( string studentid,string courseid){
    for (unsigned i = 0; i < vfulllist.size(); i++){
        if(vfulllist.at(i).GetStudentId()== studentid && vfulllist.at(i).GetCourseId()==courseid){
            for (unsigned j = 0; j < grades.size(); j++){
                atotal = atotal + grades.at(j);
            }}}
    cout<<" The average for the student "<<studentid<<" in the course "<<courseid<<" is"<< atotal/10<<endl;
    
}
void Enrollments::averageforacourse(string courseid){
    for (unsigned i = 0;vfulllist.size(); i++){
        if (courseid==vfulllist.at(i).GetCourseId()){
            btotal =btotal+vfulllist.at(i).GetAverageGrade();
            counter = counter +1;}}
    cout<< "Average for the course is: "<< btotal/counter;

        }

// storing grade book to disc file
void Enrollments::StoreGradeBook(){
    ofstream oFile;
    oFile.open("diskdata.txt");
    
    oFile << "Student   ";
    
    for (unsigned int i =0; i< vfulllist.size() ;i++)
    {
        oFile << vfulllist.at(i).GetStudentId()<< "   ";
    }
    
    oFile << "Courses   ";
    
    for (unsigned int i =0; i< vfulllist.size();i++)
    {
        oFile << vfulllist.at(i).GetCourseId() << "   ";
    }
    oFile << "Grade   ";
    
    for (int i =0; i< vfulllist.size();i++)
    {
        oFile << vfulllist.at(i).GetAverageGrade() << "   ";
    }
    
    oFile.close();
    
}
// loading gradebook from disc file
void Enrollments::LoadGradeBook(){
    string output;
    ifstream iFile ("diskdata.txt");
    if (iFile.is_open())
    {
        while (!iFile.eof())
        {
            iFile >> output;
            cout << output << endl;
        }
    }}
