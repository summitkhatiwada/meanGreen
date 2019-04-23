
// Course.cpp
//Homework 2

#include<iostream>
#include "Course.h"
# include<string>
using namespace std;
//default constructor
Course::Course()
{
    courseId="none";
    courseName="none";
    courseLocation="none";
    courseTime="none";
        }
//constructor
Course::Course(string course_id, string course_name, string course_location, string course_time){
    courseId=course_id;
    courseName=course_name;
    courseLocation =course_location;
    courseTime= course_time;
    return;
}
//mutators to change or set the values of course id, name , location and time;
void Course::setCourseId(string newcourseId){
    courseId=newcourseId;
    return;}

void Course::setCourseName(string newcourseName){
    courseName = newcourseName;
    return;}

void Course::setCourseLocation(string newcourseLocation){
    courseLocation= newcourseLocation;
    return;}

void Course::setCourseTime(string newcourseTime){
    courseTime=newcourseTime;
    return;}
    
    
// accessors to get the values of course id , course name, course location and course timing
string Course::getCourseId() const{
    return courseId;}

string Course::getCourseName() const{
    return courseName;}

string Course::getCourseLocation() const{
    return courseLocation;}
string Course::getCourseTime() const{
    return courseTime;}

