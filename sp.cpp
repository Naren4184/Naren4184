#include <iostream>
using namespace std;
class Student
{
	public:
		virtual void getdata()=0;
		virtual void display()=0;
};
	class Engineering:public Student
	{
		public:
		int regno;
		string name;
		public:
			void getdata()
			{
                cout<<"faculty->Engineering"<<endl;
				cout<<"enter name";
				cin>>name;
				cout<<"enter regno";
				cin>>regno;
			}
			void display()
			{
				cout<<"name="<<name<<endl;
				cout<<"regno="<<regno<<endl;
			}
	};
	class Medicine:public Student
	{
		public:
		int regno;
	    string name;
			void getdata()
			{
				cout<<"faculty->Medicine"<<endl;
				cout<<"enter name";
				cin>>name;
				cout<<"enter regno";
				cin>>regno;
			}
			void display()
			{
				cout<<"name="<<name<<endl;
				cout<<"regno="<<regno<<endl;
			}
	};
	class Science:public Student
	{
    public:
	int regno;
    string name;
		void getdata()
		{
			cout<<"faculty->Science"<<endl;
			cout<<"enter name";
			cin>>name;
			cout<<"enter regno";
			cin>>regno;
		}
		void display()
		{
			cout<<"name="<<name<<endl;
			cout<<"regno="<<regno<<endl;
		}
	};
		int main()
		{
		Student *p;
		Engineering e;
		Medicine m;
		Science s;
		p=&e;
		p->getdata();
		p->display();
		p=&m;
		p->getdata();
		p->display();
		p=&s;
		p->getdata();
		p->display();
		return 0;
}
