#include<iostream>
using namespace std;
struct student
{
	char name[20];
	int rollno;
	float marks;
	char grade;
}s1;

void getdetails()
{

	cout<<"Enter student details : \n";
	cout<<"Name : ";
	cin>>s1.name;
	cout<<"Roll number : ";
	cin>>s1.rollno;
	cout<<"Marks : ";
	cin>>s1.marks;
	cout<<"Grade : ";
	cin>>s1.grade;
}

void putdetails()
{
	cout<<"\nSTUDENT DETAILS : \n";
	cout<<"Student name : "<<s1.name<<endl;
	cout<<"Student rollnumber : "<<s1.rollno<<endl;
	cout<<"Student marks : "<<s1.marks<<endl;
	cout<<"Student grade : "<<s1.grade<<endl;
}

int main()
{
	getdetails();
	putdetails();
	return 0;
}
