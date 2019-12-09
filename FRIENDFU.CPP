#include<iostream.h>
#include<conio.h>
class test
{
  private:
  int x;
  public:
  /*
  void display()
  {
   cout<<"inside class";
   cout<<"value of x is:"<<x;
  }
  */
  void display();    // member function declaration
    friend void change (test &);
};
void test:: display()             //member function defination
{
	cout<<"value of x is "<<x;
}
void change (test &obj1)
{
  obj1.x=10;
  cout <<"in friend function";
  cout <<"value is "<<obj1.x;
}
void main ()
{
 test obj;
 clrscr();
 cout<<"INside main function";
 change(obj);
 obj.display();
 getch();
}