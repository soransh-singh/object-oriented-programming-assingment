/*
Q.4 Write a program to convert a distance entered in Feet and Inches 
to Meters using class to basic data type conversion.
*/ 

#include<iostream>
using namespace std;

class Distance{

    float feet;
    float inch;

    public:
      Distance(){
          feet=inch=0;
      }

      operator float(){
          return (float)(0.30548*feet + 0.0254*inch);
      }

      void display(){
          cout<<"Distance in feets & inches "<<endl;
          cout<<feet<<" ft. "<<inch<<" in."<<endl;
      }

      void getDistance(){
          cout<<"Enter the distance in feets "<<endl;
          cin>>feet;
          cout<<"Enter the distance in inches "<<endl;
          cin>>inch;
      }
};

int main(){
    Distance d;
    int ch;
    do{
	    d.getDistance();
	    d.display();
	
	    float meter=d;
	    cout<<"The distance in meters :"<<endl<<meter<<" m"<<endl;
	    
	    cout<<endl<<"Do you want to calculate more(press 1):"<<endl;
	    cin>>ch;
	}while(ch==1);
    
    return 0;
}
