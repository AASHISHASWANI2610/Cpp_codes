#include<iostream>
using namespace std;
class person 
{
	protected:
	char name[10];
	int age;
	
    public: 
	void getname()
   {
   	  cout<<"enter your name:\n";
	  cin>>name;
   	  cout<<"enter your age\n";
      cin>>age;
   }
   void displayname()
   {
   	 cout<<name<<endl;
   	 
   	 cout<<age<<endl;
   	 
   }
};
class student:public person 
 {
 	protected:
 	int id;
 	int clss;
 	char stream[10];
 	
 	public: 
	void getstudentdetail()
 	{
 		getname();
 		cout<<"enter your id no.\n";
		cin>>id;
 		cout<<"enter your clss\n";
 		cin>>clss;
 	    cout<<"enter your stream\n";
 		cin>>stream;
    }
void showstudentdetail()
{
	displayname();
	cout<<id<<endl;
	
	cout<<clss<<endl;
	
	cout<<stream<<endl;
}

};
 class teacher:public person 
{ 
   protected:
   int teacher_id;
   char subject[10];
   int salary;
   
   public: getteacherdetail()
   {
   	 getname();
   	 cout<<"enter teacher id\n";
   	 cin>>teacher_id;
   	
	 cout<<"enter subject name\n";
   	 cin>>subject;
   	
	 cout<<"enter teacher salary\n";
   	 cin>>salary;
   }
   
void teacherdetail()
	{ 
	  displayname();
	  
	  cout<<teacher_id<<endl;
	  cout<<subject<<endl;
	  
	  cout<<salary<<endl;
	}
};
int main()
{
	student obj;
	teacher objj;
	cout<<"student:--"<<endl;
	cout<<"enter details of student"<<endl;
	obj.getstudentdetail();
	cout<<"student details are:"<<endl;
	obj.showstudentdetail();
	cout<<"teacher:--"<<endl;
	objj.getteacherdetail();
	cout<<"teacher details are:"<<endl;
	objj.teacherdetail();
    return 0;
}
