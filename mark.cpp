#include<iostream>
#include<string>
using namespace std;
class marks
{
	public:
	string subject_name;
	float cat_mark,assignment_mark,mcq_mark,total,calculated;
	
	void get_input()
	{
		cout<<"Subject:    ";
		cin>>subject_name;
		cout<<"CAT:    ";
		cin>>cat_mark;
		if(cat_mark<=50.0)
		{
		cat_mark=cat_mark;
		}
		else
		{
			cout<<"Enter cat mark in limit between 0 to 50"<<endl;
			cout<<"CAT:    ";
			cin>>cat_mark;
		}
		cout<<"Assignment:    ";
		cin>>assignment_mark;
		if(assignment_mark<=40.0)
		{
		assignment_mark=assignment_mark;
		}
		else
		{
			cout<<"Enter assignment mark in limit between 0 to 40"<<endl;
			cout<<"Assignment:    ";
			cin>>assignment_mark;
		}
		cout<<"MCQ:    ";
		cin>>mcq_mark;
		if(mcq_mark<=10.0)
		{
		mcq_mark=mcq_mark;
		}
		else
		{
			cout<<"Enter mcq mark in limit between 0 to 10"<<endl;
			cout<<"MCQ:    ";
			cin>>mcq_mark;
		}
	}
	void calculate_total()
	{
		calculated = ((cat_mark * 1.4)+(assignment_mark+mcq_mark))*1.4;
		if(calculated>=100)
		{
			calculated=100;
		}
	}
	void get_marks()
	{
		calculate_total();
		cout<<subject_name<<"   "<<calculated;
	}
		
};
int main()
{
	marks m;
	m.get_input();
	m.get_marks();
	return 0;
}	
