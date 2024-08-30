#include>iostream.h>
#include<conio.h>
class employee
{
	int eid,salary;
	char ename[10];
	char department[15];

	public:
	employee()
	{
		clrscr();
		cout<<"enter a eid:";
		cin>>eid;
		cout<<"enter a ename:";
		cin>>ename;
		cout<<"enter a salary:";
		cin>>salary;
		cout<<"enter a department:";
		cin>>departement;
	}
	void display()
	{
		for(i=0;i<=5,i++)
		cout<<"\nid :"<<eid;
		cout<<"\nname :"<<ename;
		cout<<"\nsalary :"<<salary;
		cout<<"\ndepartment :"<<department;
	}
};
void main()
{
	employee e;
	clrscr();
	emp.display();
	getch();
}


