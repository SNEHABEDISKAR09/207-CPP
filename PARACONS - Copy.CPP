//demostrate to parameterize constructor
#include<iostream.h>
#include<conio.h>
class demo
{
private:
	int a,b,c;
public:
	demo(int x,int y);
	void print();
	void substract();
};
demo::demo(int x,int y)
{
 a=x;
 b=y;
}
void demo::substract()
{
c=a-b;
}
void demo::print()
{
cout<<"substraction of two number is:-"<<c<<endl;
}
main()
{
 clrscr();
 demo d(10,20);
 d.substract();
 d.print();
 getch();
}

