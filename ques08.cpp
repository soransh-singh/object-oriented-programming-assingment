/*
Assingment 2
4. Concatenate two string objects of a class String having char str[] and len as data 
members by overloading ‘+’ operator. Also overload ‘==’, ‘>’ and ‘<’ operators to 
compare two given String objects
*/

#include<iostream>
#include <cstring>
using namespace std;

class String{
	char str[100];
	int length;
	
	public:
		
		String()
		{
			length = 0;	
		}
		
		void read()
		{
			cout<<"Enter the string :"<<endl;
	        gets(str);
	        
	        length=strlen(str);
		}
		
		void show()
		{
			cout<<"The concatenated string :"<<endl;
	        puts(str);	
		}
		
		String operator+(String str2)
		{
			strcat(str,str2.str);
			return *this;
		}
		
		bool operator==(String str2)
		{
			if(strcmp(str,str2.str)==0)
			return true;
			else return false;
	    }
		
		bool operator>(String str2)
		{
			if(strcmp(str,str2.str)==1)
			return true;
			else return false;
		}
		
		bool operator<(String str2)
		{
			if(strcmp(str,str2.str)==-1)
			return true;
			else return false;
		}
	      
};

int main()
{   
      String s1,s2,s3;
      
      s1.read();
      s2.read();
      
      s3=s1+s2;
      s3.show();
      
      cout<<endl<<"The comparision of strings ::"<<endl;
      if(s1==s2)
      cout<<"The strings are equal"<<endl;
      else if(s1>s2)
      cout<<"First string is greater"<<endl;
      else
      cout<<"Second string is greater"<<endl;
    	
	return 0;
}
