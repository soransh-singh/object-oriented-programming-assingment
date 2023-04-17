/*
Assingment 2
// 3. Class Distance consists of length in feet and inches. 
// Class Distance contains ::  
// one default constructor 
// one parameterized constructor 
// function getdata() to take the value of feet and inches. 
// function show() to display. 
// a) Overload ‘<’ operator to compare the two given distances. 
// b) Overload ‘+=’ operator in the Distance class. 
*/

#include<iostream>

using namespace std;

class Distance{
private:
    pair<int, int> dis;
public:
    Distance();
    Distance(int feet, int inch);
    void getData(int feet, int inch);
    void show();
    friend bool operator<(Distance d1, Distance d2);
    void operator+=(Distance d2);
};

Distance::Distance(){
    dis = make_pair(0, 0);
}

Distance::Distance(int feet, int inch){
    dis = make_pair(feet, inch);
}

void Distance::getData(int feet, int inch){
    dis = make_pair(feet, inch);
}

void Distance::show(){
    cout<<dis.first<<"ft:"<<dis.second<<"inch\n";
}

bool operator<(Distance d1, Distance d2){
    pair<int,int> dis1 = d1.dis;
    pair<int,int> dis2 = d2.dis;
    if(dis1.first<dis2.first){
        return true;
    }else if(dis1.first>dis2.first){
        return false;
    }else {
        if(dis1.second<dis2.second){
            return true;
        }else {
            return false;
        }
    }
}

void Distance::operator+=(Distance d2){
    dis.second = dis.second + d2.dis.second;
    dis.second %= 12;
    int temp = dis.second/12;
    dis.first = dis.first + d2.dis.first + temp;
    
}



int main(){
    Distance d1(5,4), d2(5,6);
    d1.show();
    cout<<(d1<d2);
    cout<<endl;
    d1+=d2;
    d1.show();
    return 0;
}