//#include<iostream>
//using namespace std;
//
//class course 
//{
//public:
//	virtual int duration() = 0;
//
//};
//
//class onlinecourse : public course
//{
//public:
//	int week;
//	int hoursperweek;
//
//	onlinecourse(int w, int h) : week(w) , hoursperweek(h) {}
//	 
//	int duration() override
//	{
//		return week * hoursperweek;
//	}
//};
//class offlinecourse :public course
//{
//public:
//	int month;
//	int hourperday;
//
//	offlinecourse(int m, int hp) : month(m), hourperday(hp) {}
//
//	int duration() override 
//	{
//		int dayspermonth = 30;
//		return  month * dayspermonth * hourperday;
//
//	}
//};
//int main()
//{
//	onlinecourse online(8 , 5);
//	offlinecourse offline(4, 6);
//
//	cout << "Online Course Duration (hours): " << online.duration() << endl;
//	cout << "Offline Course Duration (hours): " << offline.duration() << endl;
//}