#include<iostream>
using namespace std;
class student
{
	public:
		char name[20];
		int rollno;
		char grade;
	public:
		void getdetails();
		void putdetails();
};


void student::getdetails()
{
	cout<<"Name : ";
	cin>>name;
	cout<<"Roll number : ";
	cin>>rollno;
	cout<<"Grade : ";
	cin>>grade;
}

void student::putdetails()
{
	cout<<"Student name : "<<name<<endl;
	cout<<"Student rollnumber : "<<rollno<<endl;
	cout<<"Student grade : "<<grade<<endl;
}


int main()
{
	student s[3];
	int i;
	for(i = 0; i<3; i++)
	{
		cout<<"Enter student "<<(i+1)<<" details : \n";
		s[i].getdetails();
	}
	for(i = 0; i<3; i++)
	{
		cout<<"\nstudent details of "<<(i+1)<<" : \n";
		s[i].putdetails();
	}
}
