#include<iostream>
using namespace std;
class base
{
	int x;
	public:
	base()
	{
		cout<<"base default constructor\n";
    }
};
class derived:public base
{
	int y;
	public:
	derived()
	{
		cout<<"derived default constructor\n";
		
	}
	derived(int i)
    {
    	cout<<"derived parameterized constructor\n";
    	
	}
};
int main()
{
//	base b;
	derived d1;
//	derived d2(10);
}

