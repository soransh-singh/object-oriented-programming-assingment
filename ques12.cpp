/*

Q2.Write a program to generate results for 10 students using two classes Student and Exam. 
Student class contains- stud_roll, stud_name, course_name, dob as data members and 
getrec(), modifyrec(), printrec() as member functions. Exam class contains- exam_name, 
paper_name, paper_code, marks_obtained, 
total marks, grades as data members and getmarks(), modifymarks(),printresult() as member functions.
*/ 

#include<iostream>
using namespace std;

class  student{
	
	int stud_roll;
	string stud_name;
	string course_name;
	string dob;
	
	class exam{
		string exam_name;
		string paper_name[10];
		string paper_code[10];
		int  marks_obtained[10];
		int  total_marks;
        int totalPapers;
		
		public:
			void getmarks() {
                cout << "Enter the name of the exam: " << endl;
                cin >> exam_name;
                total_marks = 0;
                cout << "Enter total number of papers: " << endl;
                cin >> totalPapers;  // initialize totalPapers
                for (int i = 0; i < totalPapers; i++) {
                    cout << endl << "Enter the paper code: " << endl;
                    cin >> paper_code[i];
                    cout << "Enter the paper name: " << endl;
                    cin >> paper_name[i];
                    cout << "Enter the marks obtained: " << endl;
                    cin >> marks_obtained[i];
                    total_marks += marks_obtained[i];
                }
            }
			
			void modifymarks(string code) {
                for (int i = 0; i < totalPapers; i++) { // modify loop condition
                    if (code == paper_code[i]) {
                        cout << "Enter the new marks: " << endl;
                        cin >> marks_obtained[i];
                    }
                }
            }
			
			void printresult(){
				cout<<"name of the exam"<<endl;
				cout<<exam_name<<endl;
				
				
				for(int i=0;i<totalPapers;i++){
					cout<<endl<<"the paper code: "<<endl;
					cout<<paper_code[i]<<endl;
					cout<<"the paper name: "<<endl;
					cout<<paper_name[i]<<endl;
				    cout<<"the marks obtained: "<<endl;
					cout<<marks_obtained[i]<<endl;	
				}
				
				cout<<endl<<"Result: "<<endl;
				if(total_marks>totalPapers*30)
				cout<<"PASSED"<<endl;
				else cout<<"FAILED"<<endl;
			}
	};
	
	exam x;
	
	public:
			
		void getrec(){
			cout<<"Enter the Roll No"<<endl;
			cin>>stud_roll;
			cout<<"Enter the name"<<endl;
			cin>>stud_name;
			cout<<"Enter the course name"<<endl;
			cin>>course_name;
			cout<<"Enter date of birth(DD/MM/YYYY)"<<endl;
			cin>>dob;
			cout<<endl;
			x.getmarks();	
		}
		
		void modifyrec(){
			int ch;
			string code;
			do{
				cout<<"Enter the field you want to modify:"<<endl;
		        cout<<"1.Roll Number"<<endl;
		        cout<<"2.Name"<<endl;
		        cout<<"3.Course Name"<<endl;
		        cout<<"4.DOB"<<endl;
		        cout<<"5.Marks"<<endl;
		        cout<<"Enter your choice"<<endl;
		        cin>>ch;
		        
		        switch(ch){
		        	case 1:
		        		cout<<"Enter the New Roll No"<<endl;
				        cin>>stud_roll;
				        break;
				    case 2:
				    	cout<<"Enter the new name"<<endl;
				        cin>>stud_name;
				        break;
				    case 3:
				    	cout<<"Enter the new course name"<<endl;
				        cin>>course_name;
				        break;
				    case 4:
				    	cout<<"Enter new date of birth(DD/MM/YYYY)"<<endl;
				        cin>>dob;
				        break;
				    case 5:
				    	cout<<"Enter the paper code to change marks"<<endl;
				    	cin>>code;
				    	x.modifymarks(code);
				    	break;
				    default :
				    	cout<<"Wrong Choice"<<endl;
				    	break;    	
		    	}
				cout<<"Do you wish to modify more(press 1)"<<endl;
				cin>>ch;
				
			}while(ch==1);	
		}
		
		void printrec(){
			cout<<"Enter the Roll No"<<endl;
			cout<<stud_roll<<endl;
			cout<<"Enter the name"<<endl;
			cout<<stud_name<<endl;
			cout<<"Enter the course name"<<endl;
			cout<<course_name<<endl;
			cout<<"Enter date of birth(DD/MM/YYYY)"<<endl;
			cout<<dob<<endl;
			
			x.printresult();
		}
	
	
};

int main(){
	
	student s[10];
	int ch;
	
	for(int i=0;i<10;i++){
		do{
        cout<<"::MENU::"<<endl;
        cout<<"1.Get Record"<<endl;
        cout<<"2.Modify Record"<<endl;
        cout<<"3.Print Record"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>ch;

        switch(ch){
            case 1:
                   s[i].getrec();

                   break;
            case 2:
                   s[i].modifyrec();

                   break;
            case 3:
                   s[i].printrec();

                   break;
           default:
                   cout<<"Wrong choice"<<endl;

                   break;
        }
	    cout<<"Do you wish to Go Back(Press 1)"<<endl;
        cin>>ch;
        }while(ch==1);
    }	
    return 0;
}
