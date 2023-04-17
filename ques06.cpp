// Assingment 2
// 1. Check whether a number is 
// even or odd by overloading ‘!’ operator.
#include<iostream>

using namespace std;

class Number{
    int num;
    public:
    Number(int n){
        num = n;
    }

    string operator!(){
        return (num%2==0?"Even":"Odd");
    }
};

int main(){
    Number num1(5);
    cout<<!num1;
    return 0;
}