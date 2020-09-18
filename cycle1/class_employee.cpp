#include<iostream>
using namespace std;
class employee
{
	public:
		int enumber;
		float basic,DA,incometax,netSalary;
		char name[20];
		void eNetSalary()
		{
			netSalary = basic + DA - incometax;
		}
		void getdetails()
		{
			cout<<"\nEnter Employee Details : \n";
			cout<<"Employee Name : ";
			cin>>name;
			cout<<"Employee Number : ";
			cin>>enumber;
			cout<<"Enter the Basic Salary : ";
			cin>>basic;
			cout<<"Enter DA : ";
			cin>>DA;
			cout<<"Enter Income Tax : ";
			cin>>incometax;
			eNetSalary();
		}
		void printdetails()
		{
			cout<<"\nEmployee Details : \n";
			cout << "Name\t\tEmp Number\tBasic Salary\tDA\t\tIncome Tax\tNet Salary"<<endl;
			cout << name << "\t" << enumber << "\t\t" << basic << "\t\t" << DA << "\t\t" << incometax << "\t\t" << netsalary << endl;
		}
}e;
int main()
{
	e.getdetails();
	e.printdetails();
	return 0;
}

