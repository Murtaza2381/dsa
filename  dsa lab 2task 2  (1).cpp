//#include<iostream>
//using namespace std;
//
//class employee
//{
//public:
//	virtual double calculatesalary() = 0;
//	virtual ~employee() {}
//
//};
//class fulltimeemployee : public employee
//{
//public:
//	double fixedsalary;
//
//	fulltimeemployee(double salary)
//	{
//		fixedsalary = salary;
//
//	}
//	double calculatesalary() override
//	{
//		return fixedsalary;
//	}
//};
//class parttimeemployee : public employee 
//{
//public:
//	double hoursworked;
//	double hourlyrate;
//
//	parttimeemployee(double hours, double rate)
//	{
//		hoursworked = hours;
//		hourlyrate = rate;
//	}
//
//	double calculatesalary() override 
//	{
//		return hoursworked * hourlyrate;
//	}
//};
//int main()
//{
//	fulltimeemployee fulltimeEmp(50000);
//
//	parttimeemployee parttimeEmp(120, 100);
//
//	cout << "Full-Time Employee Salary: $" << fulltimeEmp.calculatesalary() << endl;
//	cout << "Part-Time Employee Salary: $" << parttimeEmp.calculatesalary() << endl;
//
//	return 0;
//
//}