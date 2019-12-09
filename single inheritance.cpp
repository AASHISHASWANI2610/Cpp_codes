#include<iostream>
using namespace std;
class car
{
	protected:
    int no_of_doors;
    int car_no;
    int engine_no;
    int price;
    
    
    public:
    void showname()
    {
    	cout<<"enter no. of doors car having:\n";
	    cin>> no_of_doors;
	    cout<<"enter car no:\n";
	    cin>>car_no;
		cout<<"enter engine no. of car:\n";
	    cin>>engine_no;
	    cout<<"enter price of car:\n";
	    cin>>price;
	    
	}
	void displayname()
	{
		cout<<no_of_doors<<endl;
		
		cout<<car_no<<endl;
		
		cout<<engine_no<<endl;
		
		cout<<price<<endl;
		
	}
	
};
class sportscar:public car
{
 	protected:
 	int speed;
 	int torque;
 	int cc;
 	
 	public: 
	void cardetail()
 	{
 		showname();
 		cout<<"enter speed.\n";
		cin>>speed;
 		cout<<"enter torque\n";
 		cin>>torque;
 	    cout<<"enter cc\n";
 		cin>>cc;
    }
void menu()
    {
	  showname();
	  cout<<speed<<endl;
	
      cout<<torque<<endl;
	
	  cout<<cc<<endl;
    } 

};
int main()
{
	car obj;
	sportscar objj;
	cout<<"car:--"<<endl;
	cout<<"enter details of car"<<endl;
	objj.cardetail();
    return 0;


}


