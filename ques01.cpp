// Define a Class Largest to obtain the largest of three given numbers.

#include <bits/stdc++.h>

using namespace std;

class Largest{
    public:
    int num[3];
    Largest(){
        int n1, n2, n3;
        cout<<"Enter three numbers one by one: \n";
        cout<<"Enter First number: ";
        cin>>n1;
        num[0]=n1;
        
        cout<<"Enter Second number: ";
        cin>>n2;
        num[1]=n2;

        cout<<"Enter Third number: ";
        cin>>n3;
        num[2]=n3;
    }

    Largest(int n1,int n2,int n3){
        num[0]=n1;
        num[1]=n2;
        num[2]=n3;
    }

    int findLargest();
};

int Largest::findLargest(){
    sort(num, num+3, greater<int>());
    return num[0];
}

int main(){
    Largest L1;
    cout<<L1.findLargest();
    return 0;
}