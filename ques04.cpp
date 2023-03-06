/*
// 4. Create a class Time to add Two times provided in hour-minute format. Use member
// functions
// a. void input() to provide hour and minute.
// b.  void gettime(int,int) to take hour and minute entered by user.
// c.  sum(time <oj> ) to add minutes and hours for two Time objects. If minutes is > 60 add 1 with
// hour.
// d.  void display() to display the result.
*/ 

#include<bits/stdc++.h>

using namespace std;

class Time{
    pair<int, int> time;
    public: 
    void input();
    void getTime(int hr, int min);
    Time sum(Time t);
    void display();
};

void Time::input(){
    int hr,min;
    cout<<"Enter hour: ";
    cin>>hr;
    cout<<"Enter minute";
    cin>>min;
    time = make_pair(hr, min);
}

void Time::getTime(int hr, int min){
    time = make_pair(hr, min);
}

Time Time::sum(Time t){
    Time out;
    int hr,min;
    min = time.second + t.time.second;
    hr = time.first + t.time.first + (min/60);
    min = min%60;
    out.time = make_pair(hr, min);
    return out;
}

void Time::display(){
    cout<<"\nTime: "<<time.first<<"hr:"<<time.second<<"min";
}



int main(){
    Time t[2];
    t[0].input();
    t[0].display();
    t[1].getTime(2,30);
    t[1].display();
    Time t3 = t[0].sum(t[1]);
    t3.display();
    return 0;
}