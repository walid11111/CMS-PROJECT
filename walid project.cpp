#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class person{
	
	protected :
		int pw;
		string name;
		int age;
		string gender;
		int p_number;
		int cnic;
		string email;
		string p_adress;
        
	public:
//		person(){
//			
//			name='\0';
//			age=0;
//			pw=0;
//			p_number=0;
//			email='\0';
		
//		}
		virtual void input(){
			cout<<"Enter Your Password :";
		    cin>>pw;
			cout<<"Enter your name :";
			cin>>name;
			cout<<"Enter your age :";
			cin>>age;
			cout<<"Enter your gender :";
			cin>>gender;
			cout<<" Enter your phone number ";
			cin>>p_number;
			cout<<"Enter your CNIC ";
			cin>>cnic;
			cout<<"Enter Your Email Adress:";
		    cin>>email;
		    cout<<"Enter Your permanent Adress:";
		    cin>>email;
		    
	                	}  
			
	
	      virtual void show(){
	      	cout<<"The Password is :"<<pw<<endl;
		    cout<<"The name is :"<<name<<endl;
			cout<<"The age is :"<<age<<endl;
			cout<<" gender :"<<gender<<endl;
			cout<<"phone number "<<p_number<<endl;
			cout<<" CNIC ARE  "<<cnic<<endl;
			cout<<"The Email is :"<<email<<endl;
			cout<<"permanent Adress:"<<p_adress<<endl;
		    
		
		}
		
};

class student:public person{       // child class of person
	public:
	    string regno;
	    string semster;
	    string deptt;
	    string birthdate;
		
	public:
		
//		student(){
//			regno='\0';
//			deptt='\0';
//			semster='\0';
//	    }
	         	
	         	
	void input(){
		
	    person::input();
	    cout<<"Enter Your Date of birth ";
		cin>>birthdate;
		cout<<"Enter Your Registration Number ";
		cin>>regno;
		cout<<"Enter Your Current Semester:";
		cin>>semster;
		cout<<"Enter Your Department :";
		cin>>deptt;
		}
		
	void show(){
			
		person::show();
		cout<<" Your Date of birth "<<birthdate<<endl;
		cout<<"Your Registration Number: "<<regno<<endl;
		cout<<" Your Current Semester: "<<semster<<endl;
		cout<<" Your Department: "<<deptt<<endl;
			
			
		}
};


		
class university_information:public student{       // child class of student
	protected:
	    string admission_session;
	    string study_program;
	    string admission_date;
	    int current_samister;
		
	public:        	
	  void input(){
		
	    student::input();
	    cout<<"Enter Your Admission session ";
		cin>>admission_session;
		cout<<"Enter your study program ";    // mean field
		cin>>study_program;
		cout<<"Enter your admission date:";
		cin>>admission_date;
		cout<<"Enter Your current samister  :";
		cin>>current_samister;
		}
		
		
	 void show(){
		cout<<" Admission session: "<<admission_session<<endl;
		cout<<" study program: "<<study_program<<endl;
		cout<<"admission date: "<<admission_date<<endl;
		cout<<"current samister: "<<current_samister<<endl;
			
			
		}
		
		
	
};
class acadmic:public person{      // child class of person
	protected :
		char degree;
		int passingyear,totalm;
		float obtain;
	public:
		
		void input(){
			
				cout<<"ENter The Degree:";
				cin>>degree;
				cout<<"Enter Passing year of DEgree:";
				cin>>passingyear;
				cout<<"Enter Obtain Marks:";
				cin>>obtain;
				cout<<"Enter Total Marks";
				cin>>totalm;
				
		}
		
		void show(){
			
				cout<<" The Degree:"<<endl;
				cout<<" Passing year of DEgree:"<<endl;
				cout<<" Obtain Marks:"<<endl;
				cout<<"Enter Total Marks"<<endl;
			
		
	}
};

class Faculty:public person{     //child class of person
	protected :
		string diseg;
		int salary;
		string subject;
	public:
		
//		Faculty(){
//			string diseg='\0';
//		    int salary=0;
//		    string subject='\0';
//		}
		void input(){
			person::input();
			cout<<"Enter Your Designation (scale)";
			cin>>diseg;
			cout<<"ENter Your SAlary Sir please :";
			cin>>salary;
			cout<<"Enter Your Suject (You teach) ";
			cin>>subject;
		}
		void show(){
			cout<<"The Teacher designation is :"<<diseg<<endl;
			cout<<"The Teacher Salary is :"<<salary<<endl;
			cout<<"The Subject of  Teacher is :"<<subject<<endl;
		}
};

class c1:public Faculty{
	protected:
		float a_marks;
		float q_marks;
		int present,absent;
	public:
		  c1(){
		  }
		  
		  void input(){
		  	char ch;
		  	cout<<" ARE YOU WANT To ADD THE PERSONAL INFORMATION OF TEACHER (PERSON CLASS)(y/n): ";
		  	cin>>ch;
		  	if(ch=='y'|| ch=='Y'){
		  	person::input();        
		  }
		  
		  	cout<<" ARE YOU WANT TO ADD FACULTY INFORMATION OF TAECHER (FACYLTY CLASS)(y/n): ";
		  	cin>>ch;
		  	if(ch=='y'||ch=='Y'){
		  	Faculty::input();
		}
		  	cout<<"Enter your assignment marks :";
		  	cin>>a_marks;
		  	cout<<"Enter your quizes marks :";
		  	cin>>q_marks;
		  	cout<<"Total presenties are 32: "<<endl;
		  	cout<<"Enter your presenties :";
		  	cin>>present;
		    absent=32-present;
  		  	
		  }
		  
		void show(){
		   	char ch;
		  	cout<<" ARE YOU WANT To SHOW THE PERSONAL INFORMATION OF TEACHER (PERSON CLASS)(y/n): ";
		  	cin>>ch;
		  	if(ch=='y'|| ch=='Y'){
		   	person::show();
		   }
		   
		   cout<<" ARE YOU WANT TO SHOW FACULTY INFORMATION OF TAECHER (FACYLTY CLASS)(y/n): ";
		  	cin>>ch;
		  	if(ch=='y'||ch=='Y'){
		  	Faculty::show();
		  }
		    cout<<"\n";
		    cout<<"**** SECTIONAL MARKS *******"<<endl;
		  	cout<<" your assignment marks are :"<<a_marks<<endl;
		  	cout<<" your quizes marks are :"<<q_marks<<endl;
		  	cout<<" your presenties are : "<<present<<endl;
		  	cout<<"your absenties are :"<<absent<<endl;
		  	cout<<"\n";
		  }
				
			
};

class staff:public person{             // child class of person
	protected :
		char s_id;
		char position;
		char officeLocation;
		char employmentStatus;
	public:
		void input(){
			person::input();
			cout<<"Enter Your staff ID:";
		     cin>>s_id;
			cout<<"Enter your job position:";
		    cin>>position;
			cout<<"Enter Your office location ";
			cin>>officeLocation;
			cout<<"Enter emplayestatus ";    // full time job or part time or permanent
		    cin>>employmentStatus;
		}
		void show(){
			cout<<" staff ID are :"<<s_id<<endl;;
			cout<<" job position are :"<<position<<endl;
			cout<<" office location are :"<<officeLocation<<endl;
		    cout<<"emplayestatus are "<<employmentStatus<<endl;    // full time job or part time or permanent
			
		}
};

class P_graduate:public person{         // child class of person
	public:
		string predeptt;
	public:
//		 p_graduate(){
//		 	predeptt='\0';
//		 }
		void input(){
			person::input();
			cout<<"Enter Your previous Department :";
			cin>>predeptt;
		}
		void show(){
			person::show();
			cout<<"THE  Previous Department is :"<<predeptt;
			
		}
};

int info(){				//simple funtion defintion
	c1 obj7;
	
		do{
			
			cout<<"******  TOTAL TEACHER INFORMATION **** "<<endl;
			cout<<"1. :SIR SHEHZAD SAB ALL INFORMATION: "<<endl;
			cout<<"2. :SIR FAISAL ABRAR SAB ALL INFORMATION: "<<endl;
			cout<<"3. :SIR INAYAT KHAN SAB ALL INFORMATION: "<<endl;
			cout<<"4. :SIR MUSHTAQ SAB ALL INFORMATION: "<<endl;
			cout<<"5  :MAM SABA HASAN"<<endl;
			//cout<<"6  :***** FOR MAIN MENU OF CMS  ****"<<endl;
			cout<<"7. :Exit:"<<endl;
		  cout<<"Enetr YOUR CHOISE"<<endl;
       int OP;
       //system("cls");
          cin>>OP;
          char ch;
       switch(OP)
	   {
       	
        case 1:
        	 cout<<" Enter Digital Logic disgn course Detail"<<endl;
	         obj7.input();
	         cout<<"\n";
	         cout<<"Are you want to show course detail...obj (y/n):";
			 cin>>ch;  
			 if(ch=='y'||ch=='Y'){
	         cout<<"** Deigital logic design****"<<endl;
	         obj7.show();
	     }   
		  break;
		  
		  case 2:
        	 cout<<" Enter Object orienrted proram course Detail"<<endl;
	         obj7.input();
	         cout<<"\n";
	         cout<<"Are you want to show course detail...(y/Y):";
			 cin>>ch;  
				if(ch=='y'||ch=='Y'){
	         cout<<"** OBJEct oriented program****"<<endl;
	         obj7.show();
	     }  
		  break;
		  
		  case 3:
        	 cout<<" Enter Descrete Structure  course Detail"<<endl;
	         obj7.input();
	         cout<<"\n";
	         cout<<"Are you want to show course detail...(y/Y):";
			 cin>>ch;  
				if(ch=='y'||ch=='Y'){
	         cout<<"** Descrete Structure ****"<<endl;
	         obj7.show();
	     } 
		  break;
      	
      	  case 4:
        	 cout<<" Enter Linear Algebra  course Detail"<<endl;
	         obj7.input();
	         cout<<"\n";
	         cout<<"Are you want to show course detail...(y/Y):";
			 cin>>ch;  
				if(ch=='y'||ch=='Y'){
	         cout<<"** Linear Algebra ****"<<endl;
	         obj7.show();
	     }   
		  break;
		  
		  case 5:
        	 cout<<" Enter English course Detail"<<endl;
	         obj7.input();
	         cout<<"\n";
	         cout<<"Are you want to show course detail...(y/Y):";
			 cin>>ch;  
				if(ch=='y'||ch=='Y'){
	         cout<<"** English****"<<endl;
	         obj7.show();
	     }
		    
		  break;
		  
//		   case 6:
//		   	main();
//		   	break;
		   	
		  case 7:
        	 exit(0);
		  break;
		  
		  default :
		  cout<<"Sorry Invalid entry Try again please:";
    }
	  system("pause");
	  system("cls");
   }while(1);
}

		
int main(){
	student obj1;
    Faculty obj2;
	staff obj3; 
    P_graduate obj4;
    university_information obj5;
    acadmic obj6;
    
		
		
			do{
			cout<<"******  MAIN MENU OF CMS  **** "<<endl;
			cout<<"1. :FOR STUDENT INFORMATION: "<<endl;
			cout<<"2. :FOR FACULTY INFORMATON: "<<endl;
			cout<<"3. :FOR STAFF INFORMATON: "<<endl;
			cout<<"4. :FOR POST GRADUATE: "<<endl;
			cout<<"5  :UNIVERSITY INFORMATION OF STUDENT"<<endl;
			cout<<"6. :ACADmic INforamtion:"<<endl;
			cout<<"7  :TOTAL TEACHER INFORMATIONS:"<<endl;
			cout<<"8. :Exit:"<<endl;
			
	   cout<<"Enetr YOUR CHOISE"<<endl;
       int press;
       char ch;
	   cin>>press;
	   system("cls");
       switch(press)
	   {
       	
        case 1:
        	 cout<<"*** PLEASE ENTER STUDENT INFORMATION ****"<<endl;
	         obj1.input();
	         cout<<"\n";
	
				cout<<"Are You Want to Show The DEtails(y/Y):";
				cin>>ch;
				if(ch=='y'||ch=='Y'){	
	         cout<<"***  STUDENTS informationS ARE :****"<<endl;
	         obj1.show();
	         cout<<"\n";
	     }  
		  break;
		  
      	case 2:
       	     cout<<"*** PLEASE ENTER FACULTY INFORMATION ****"<<endl;
	        obj2.input();
	         cout<<"\n";
	
				cout<<"Are You Want to Show The DEtails(y/Y):";
				cin>>ch;
				if(ch=='y'||ch=='Y'){
       	     cout<<"*** FACULTY INFORMATION ARE :****"<<endl;
	         obj2.show();
	         cout<<"\n";
	     }
       	break;
		   
		   case 3:
       	     cout<<"*** PLEASE ENTER STAFF INFORMATION ****"<<endl;
	        obj3.input();
	         cout<<"\n";
	
				cout<<"Are You Want to Show The DEtails(y/Y):";
				cin>>ch;
				if(ch=='y'||ch=='Y'){
       	     cout<<"*** STAFF INFORMATION ARE :****"<<endl;
	         obj3.show();
	         cout<<"\n";
	     }
       	break;
       	
		case 4:
	        cout<<"*** PLEASE ENTER POST GRADUATE INFORMATON ****"<<endl;
           	obj4.input();
	        cout<<"\n";
	
				cout<<"Are You Want to Show The DEtails(y/Y):";
				cin>>ch;
				if(ch=='y'||ch=='Y'){
	        cout<<"*** POST GRATUATION INFORMATION ARE ****"<<endl;
	         obj4.show();
       	    cout<<"\n";
       	}
       	    break;
       	    
       	    case 5:
	        cout<<"*** PLEAZE ENTER UNIVERISTY INFORMATION OF STUDENT ****"<<endl;
           	obj5.input();
	        cout<<"\n";
	
				cout<<"Are You Want to Show The DEtails(y/Y):";
				cin>>ch;
				if(ch=='y'||ch=='Y'){
	        cout<<"*** STUDENT UNIVERSITY INFORMATION ARE ****"<<endl;
	         obj5.show();
       	    cout<<"\n";
       	}
       	    break;
			  
			  case 6:
			  	cout<<"***********ACADmic Information***********\n";
			  	
			  obj6.input();
			  cout<<"\n"<<endl;
			  obj6.show();
			  break;
			  
		case 7:
			info();
		break;
		
		case 8:
		exit(0);
		break;
			
		default:
		cout<<"Sorry You Have ENter Invalid Numbe PLeas Try Again :"; 		
	  }system("pause");
	  system("cls");
    }while(1);

}
