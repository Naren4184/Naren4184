#include<iostream>
using namespace std;
class REPORT
{
	int adno;
	string name;
	float m1,m2,m3,m4,m5,avg;
	void getavg()
	{
    	avg=m1+m2+m3+m4+m5/5;
	}
public :
	void read();
	void display();
};
void REPORT::read()
{
	cout<<"Enter admission number";
	cin>>adno;
	cout<<"Enter the name";
	cin>>name;
	cout<<"enter the marks";
	cin>>m1>>m2>>m3>>m4>>m5;
	getavg();
}
void REPORT::display()
{
	cout<<"admission number"<<adno<<"\nname"<<name<<"\naverage"<<avg;
}
int main()
{
	REPORT obj;
	obj.read();
	obj.display();
	return 0;
}
