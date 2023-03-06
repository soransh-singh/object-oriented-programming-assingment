/*
// 5. Write a C++ program to add two complex numbers using class Complex 
// having real and imag as data members.

// (i) The class Complex contains three constructors. 
// One with no parameter. (Used for the object for storing result.) 
// With one parameter(Same value for real and imaginary part) 
// With two parameters (Different Values for real and imaginary part)

// ii) Two friend functions

// a) One to add two complex numbers by taking two reference variables 
// of class complex and returning another reference.

// b) To display the result
*/ 

#include<bits/stdc++.h>

using namespace std;

class Complex{
private:
    pair<int, int> num;
public:
    Complex();
    Complex(int n);
    Complex(int real, int img);

    friend Complex add(Complex C1, Complex C2);
    friend void display(Complex C);
};



Complex::Complex(){

}
Complex::Complex(int n){
    num = make_pair(n, n);
}

Complex::Complex(int real, int img){
    num = make_pair(real, img);
}

Complex add(Complex C1, Complex C2){
    Complex out;
    int real, img;
    real = C1.num.first + C2.num.first;
    img = C1.num.second + C2.num.second;
    out.num = make_pair(real, img);
    return out;
}
void display(Complex C){
    cout<<"\nnum: "<<C.num.first<<" "<<C.num.second<<"i";
}

int main(){
    Complex c1(4), c2(4,3);
    display(c1);
    display(c2);
    Complex c3= add(c1,c2);
    display(c3);
    return 0;
}