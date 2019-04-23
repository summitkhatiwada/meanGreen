/* Name: Aashish Pandey
 Course: CSCE 1040
 Instructor: Prof David Keathly
 Date: 10/14/2017
 Description: This program creates a simple grade book in which user can choose from menu options about what task they want to do like add student, add grade , add course etc.
 */
#include <iostream> //inclusion of input and output
#include <string>  //including vector and strings
#include <vector>
#include "Enrollment.h" // including all the class files to main
#include "Student.h"
#include "Course.h"
#include "Enrollments.h"
#include "Students.h"
#include "Courses.h"


using namespace std;
void PressEnterToContinue();
void PrintMenu();// prints the menu option

Enrollments elist; // object for class Enrollments
Students slist; // object for class Students
Courses clist; // object for classf courses



int main()
{
    int MenuChoice; // taking menu choice from the users
    string course_name, course_time, course_location, course_id;// initialazation of variables for names, id , classifiacation  and lettet grade
    string student_name, student_id , student_classification, lettergrade;
    
    // for inital display of my and department information at first of the output
    
    cout << "+---------------------------------------------------+"<<endl;
    cout << "|      Computer Science and Engineering             |"<<endl;
    cout << "|      CSCE 1040 - Computer Science                 |"<<endl;
    cout << "|Aashish Pandey  11225327 AashishPandey@my.unt.edu  |" << endl;
    cout << "+---------------------------------------------------+" << endl;
    
    // providing user the list of menu items and and asking what they want to do
    while (MenuChoice!=13) {
        PrintMenu(); //void function to pring the menu options
        cout <<"\n\nEnter your Choice ::::::::::  ";
        cin>>MenuChoice;
        switch (MenuChoice) {
            case 1:{
                //asking the course informations to the user to add the course to the list
                cout<<"Please enter the course name you want to add:"<<endl;
                cin>>course_name; 
                
                cout<<"Please enter the course id: "<<endl;
                cin >> course_id;
               
                cout<<"Please entet the class location: "<<endl;
                cin>> course_location;
                
                cout<<"Please enter the class time: "<<endl;
                cin>> course_time;
                
                
                
                Course coursetoadd (course_id, course_name, course_location, course_time); //passing values to a constructor
                clist.AddCourseToList(coursetoadd); // adding the information to the list in courses class
                cout << "Course added"<<endl<<endl;
                PressEnterToContinue();
            break;}
                
            case 2:{
                //asking users the student informations to add a student in the list
                cout<<"Please the student Id: "<<endl;
                cin >> student_id;
                cout <<"Please enter the student name: "<<endl;
                cin>> student_name;
                cout<<"Please enter the student classification: "<<endl;
                cin >> student_classification;
                Student studenttoadd(student_id , student_name , student_classification);
                slist.AddStudentToList(studenttoadd); //adding the student information to the list
                PressEnterToContinue();
            break;}
        
            case 3: {
                cout<<":::Please Enter the Student and Course Details:::"<<endl;//asking user the student and course info
                cout<<"Please enter the student ID:"<<endl;
                cin>>student_id;
                cout<<"Now, Please enter the course ID"<<endl;
                cin>>course_id;
                Enrollment newenrollment(student_id, course_id);// adding the course and student info to entrollment list
                elist.AddEnrollmentToList(newenrollment);
                break;
                
            }
                
            case 4:{
                
                
                elist.AddGradesForaStudentToCourse();// calling a function in Enrollments class to add the grades
                PressEnterToContinue();
                
                break;
            }
            case 5: {
                //asking user student and course info to print the list of grades by a studnt in specific course
                cout<<"Please Enter the student id: "<<endl;
                cin>>student_id;
                cout<<"Please Enter the course id: "<<endl;
                cin >>course_id;
                elist.PrintStudentCourseGradeList(student_id,  course_id);// function in Enrollments class to print the grades
                PressEnterToContinue();
                break;
            }
            
            case  6:{
                cout<<":::All students in a course:::"<< endl<< endl;
                cout<<"Please enter the course id: "<<endl;
                cin>> course_id;
                elist.PrintStudentsInACourse(course_id);// function in enrollments clas which prints all the students in the course
                break;
            }
           case 7:{
                cout << ":::Average for a student in a course:::"<<endl<<endl;
                cout<<"Please Enter the student id"<<endl;
                cin>> student_id;
                cout<<"Please Enter the course id"<<endl;
                cin>> course_id;
                elist.AverageForStudentCourse( student_id,course_id);
                PressEnterToContinue();
                break;}
                
            case 8:{
                clist.PrintList(); // prints the list of all the courses added from Courses class
                PressEnterToContinue();
                break;}
                
            case 9:{
                slist.PrintList(); //Prints the list of all the student added from Students class
                PressEnterToContinue();
                break;}
            case 10:{
                cout <<":::Average for a course:::"<<endl;
                cout<<endl<<" Enter the course id:"<<endl;
                cin>> course_id;
                elist.averageforacourse(course_id); // calls for the function in enrollments class to find the average of the course
            }
            case 11: {
                elist.StoreGradeBook();
                PressEnterToContinue();
                break;
            }
            case 12:{
                elist.LoadGradeBook();
                PressEnterToContinue();
                break;
            }
            case 13:{
                return 0;
                
            }
            
            }
                
        }
    }
    

// print function which displays the list of options for the user
        void PrintMenu(){
            cout <<":::::::::::::: Please Enter the Choice ::::::::::::::"<< endl;
            cout <<"1. Add a new course"<< endl;
            cout <<"2. Add a new student"<< endl;
            cout <<"3. Add a student to a course"<< endl;
            cout <<"4. Add grades for a student in a course"<< endl;
            cout <<"5. Print a list of all grades for a student in a course"<<endl;
            cout <<"6. Print a list of all students in a course"<< endl;
            cout <<"7. Compute the average for a student in a course "<< endl;
            cout <<"8. Print a list of all courses"<<endl;
            cout <<"9. Print a list of all students"<< endl;
            cout <<"10. Compute the average for a course "<< endl;
            cout <<"11. Store Grade book (to a disk file) "<< endl;
            cout <<"12. Load Grade book (from a disk file) "<< endl;
            cout <<"13. Exit"<< endl;
        }

void PressEnterToContinue(){
    string x;
    cout<<"\n Press 1 to continue...\n"<<endl;
    cin>>x;
}


