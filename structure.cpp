#include<iostream>
using namespace std;
struct person
{
	public:
	int age;
	float weight;
	char first_name[30];
	char last_name[30];
	int l[15];
	input()
	{
		cout<<"Enter the age"<<endl;
		cin>>age;
		cout<<"Enter the weight"<<endl;
		cin>>weight;
		cout<<"Enter the first_name"<<endl;
		cin>>first_name;
		cout<<"Enter the last_name"<<endl;
		cin>>last_name;
		cout<<"Enter the lucky_number"<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>l[i];
		}
		cout<<endl;
	}
	
	print()
	{
		cout<<"Age is "<<age<<endl;
		cout<<"Weight is "<<weight<<endl;
		cout<<"First_name is "<<first_name<<endl;
		cout<<"Last_name is "<<last_name<<endl;
		cout<<"Lucky_numbers is ";
		for(int i=0;i<5;i++)
		{
			cout<<" "<<l[i];
		}
		
	}
	
};
int main()
{
	person p;
	p.input();
	p.print();
	return 0;
}
