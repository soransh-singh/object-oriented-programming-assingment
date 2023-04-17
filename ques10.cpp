/*
 * Assingment 3
 * 1. Write a program to implement the usage of static 
 * data members and static member functions of a class.
*/

#include<iostream>

using namespace std;

class test{
    int code;
    static int count;

    public:
    void setCode(){
        code = count++;
    }

    void showCode(){
        cout<<"Object Number: "<<code<<endl;
    }
    
    static void showCount(){
        cout<<"Count: "<<count<<endl;
    }
};
int test::count=0;

int main(){
    test t[3];
    t[0].setCode();
    t[1].setCode();
    test::showCount();

    t[2].setCode();
    test::showCount();
    for(int i=0; i<3; i++){
        t[i].showCode();
    }
    return 0;
}