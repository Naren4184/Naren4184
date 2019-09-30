#include<iostream>
#include<iomanip>
using namespace std;
class list
{
	int i;
	public:
		struct list1
		{
			string item_name;
			double item_code;
			float cost;
		}l[10];
		void get_data()
		{
			cout<<"Enter How many number of items :";
			cin>>i;
			
			cout<<"Enter item details in the form of\nName of item\nItem Code\nItem Cost\n";
			for(int j=0;j<i;j++)
			{
				cin>>l[j].item_name;
				cin>>l[j].item_code;
				cin>>l[j].cost;
				cout<<"-----------------"<<endl;
			}
		}
		void print()
		{
			cout.width(20);
			cout<<"NAME";
			cout.width(16);
			cout<<"CODE";
			cout.width(16);
			cout<<"COST"<<endl;
			cout<<"-------------------------------------------------------------------------------------------\n";
			for(int j=0;j<i;j++)
			{
				cout.width(20);
				cout<<l[j].item_name;
				cout.width(16);
				cout<<l[j].item_code;
				cout.width(16);
				cout.precision(2);
				cout<<l[j].cost<<endl;
			}
		}
};
int main()
{
	list li;
	li.get_data();
	li.print();
}
