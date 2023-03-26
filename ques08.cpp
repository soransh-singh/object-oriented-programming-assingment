/*
Assingment 2
4. Concatenate two string objects of a class String having char str[] and len as data 
members by overloading ‘+’ operator. Also overload ‘==’, ‘>’ and ‘<’ operators to 
compare two given String objects
*/

#include<iostream>

using namespace  std;


class String{
    private:
        char * str[];
        int len;
    public:
    String(){
        str = nullptr;
        len = 0;
    }  

    String(char* s){
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    getString(char* s)
};


int main(){
    return 0;
}