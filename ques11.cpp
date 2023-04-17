/*
    Assingment 3
    2. Write a program to generate results for 10 students using two classes 
    Student and Exam. Student class contains- stud_roll, stud_name, 
    course_name, dob as data members and getrec(), modifyrec(), printrec()
    as member functions. Exam class contains- exam_name, paper_name, 
    paper_code, marks_obtained, total marks, grades as data members and 
    getmarks(), modifymarks(),printresult() as member functions.
*/

#include<bits/stdc++.h>

using namespace std;

class Student;
class Exam;

class Exam{
private:
    string exam_name;
    string paper_name;
    string paper_code;
    string marks_obtained;
    string marks_total;
    string grades;
public:
    Exam();
    void getmarks();
    void modifymarks();
    void printresult();
};

Exam::Exam(/* args */){
}


class Student{
private:
    string stud_name;
    string course_name;
    string dob;
    string stud_roll;
    int no_of_exam;
    Exam exam[no_of_exam];
public:
    Student();
    void getrec();
    void modifyrec();
    void printrec();
};

void Student::getrec(){
    cout<<"Enter the name of student: ";
    cin>>stud_name;
    cout<<"Enter the course of student";
    cin>>stud_roll;
    cout<<"Enter the course:";
    cin>>course_name;
    cout<<"Enter the dob of Student";
    cin>>dob;
    cout<<"Enter the number of Exam :";
    cin>>no_of_exam;

}

void Student::modifyrec()



Student::Student(){
}

int main(){
    return 0;
}