/*
Q3. Write a program to implement the member functions of a Class 
Shape having the same name, calculate_area() 
for calculating the area of a Triangle, Rectangle 
and Circle using the concept of Function overloading.
*/ 

#include<iostream>
#include<math.h>
using namespace std;

class shape{

    public:
        float calculate_area(float side1,float side2,float side3){
            float semiPeri=(side1+side2+side3)/2.0; //half of perimeter;
            return (float) sqrt(semiPeri * (semiPeri - side1) * (semiPeri - side2) * (semiPeri - side3));
        }

        float calculate_area(float length,float breadth){
            return length*breadth;
        }

        float calculate_area(float radius){
            return (float)3.14*radius*radius;
        }
};

int main(){
    int ch;
    float s1,s2,s3;
    shape sh;
    do{
        cout<<"SHAPES"<<endl;
        cout<<"1.Triangle"<<endl;
        cout<<"2.Rectangle"<<endl;
        cout<<"3.Circle"<<endl;
        cout<<"Enter Your Shape"<<endl;
        cin>>ch;

        switch(ch){
            case 1:
                   cout<<"Enter the sides of the triangle"<<endl;
                   cin>>s1>>s2>>s3;
                   cout<<"The area of the triaqngle is"<<endl;
                   cout<<sh.calculate_area(s1,s2,s3)<<endl;

                   break;
            case 2:
                   cout<<"Enter the length and breadth of the rectangle"<<endl;
                   cin>>s1>>s2;
                   cout<<"The area of the Rectangle is"<<endl;
                   cout<<sh.calculate_area(s1,s2)<<endl;

                   break;
            case 3:
                   cout<<"Enter the radius of the circle"<<endl;
                   cin>>s1;
                   cout<<"The area of the circle is"<<endl;
                   cout<<sh.calculate_area(s1)<<endl;

                   break;
           default:
                   cout<<"Wrong choice"<<endl;

                   break;
        }




        cout<<"Do you wish to calculate more(Press 1)"<<endl;
        cin>>ch;
        if(ch != 1){
            break;
        }
    }while(true);
    return 0;
}
