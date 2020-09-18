#include<iostream>
using namespace std;

class student
{
	public:
		char name[20];
		int rollno;
		char grade;
};
student s[3];

void getdetails(student s[3]);
void putdetails(student s[3]);


int main()
{

	getdetails(s);
	putdetails(s);
	return 0;
}


void getdetails(student s[3])
{
	for(int i = 0; i<3; i++)
	{
	cout<<"Enter Student "<<i+1<<" details : \n";
	cout<<"Name : ";
	cin>>s[i].name;
	cout<<"Roll number : ";
	cin>>s[i].rollno;
	cout<<"Grade : ";
	cin>>s[i].grade;
	}
}

void putdetails(student s[3])
{
	for(int i = 0; i< 3; i++)
	{
	cout<<"\nStudent "<<i+1<<" details are : \n";
	cout<<"Name : "<<s[i].name<<endl;
	cout<<"Rollnumber : "<<s[i].rollno<<endl;
	cout<<"Grade : "<<s[i].grade<<endl;
	}
}

