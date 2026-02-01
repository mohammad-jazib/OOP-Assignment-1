//#include<iostream>
//#include<cmath>
//using namespace std;
//int cube(int a)
//{
//	return cbrt(a);
//}
//int cube(float a)
//{
//	return cbrt(a);
//}
//int main()
//{
//	int number;
//	cout << "enter a number " << endl;
//	cin >> number;
//	cout << cube(number) << endl;
//	return 0;
//}

//QUESTION 2

//#include<iostream>
//using namespace std;
//int adding(int a, int b)
//{
//	return a + b;
//}
//double adding(double a, double b)
//{
//	return a + b;
//}
//int main()
//{
//	double num1, num2;
//	int num3, num4;
//	cout << "enter two number float number" << endl;
//	cin >> num1 >> num2;
//	cout << adding(num1, num2) << endl;
//	cout << "enter two integer value" << endl;
//	cin >> num3 >> num4;
//	cout << adding(num3, num4);
//	return 0;
//}

//QUESTION 3

//#include<iostream>
//using namespace std;
//struct Time
//{
//	int hours;
//	int minutes;
//	int seconds;
//};
//int main()
//{
//	Time t;
//	int total;
//	cout << "enter the hour" << endl;
//	cin >> t.hours;
//	cout << "enter the minutes" << endl;
//	cin >> t.minutes;
//	cout << "enter the seconds" << endl;
//	cin >> t.seconds;
//	total = t.hours * 3600 + t.minutes * 60 + t.seconds;
//	cout << "total second are " << total << endl;
//	return 0;
//}

//QUESTION 4

#include<iostream>
using namespace std;
struct Subject
{
	string subject_name;
	int credit_hours;
	int total_marks;
	char grade;
	float grade_point;
};
struct Student
{
	string name;
	long long int enrollment;
	Subject subjects[5];
};
int main()
{
	Student s;
	float totalpoints = 0;
	float GPA = 0;
	int totalhours = 0;
	s.name = "Muhammad Jazib";
	s.enrollment = 9131252049;
	s.subjects[0] = { "programming fundamental",4,88,'A',4.0 };
	s.subjects[1] = { "Compiler construction",3,87,'A',4.0 };
	s.subjects[2] = { "oop",3,90,'A',4.0 };
	s.subjects[3] = { "English",3,94,'A',4.0 };
	s.subjects[4] = { "physics",4,89,'A',4.0 };
	for (int i = 0; i < 5; i++)
	{
		totalpoints += s.subjects[i].credit_hours * s.subjects[i].grade_point;
		totalhours += s.subjects[i].credit_hours;
	}
	GPA = totalpoints / totalhours;
	cout << "Student Name: " << s.name << endl;
	cout << "Enrollment No: " << s.enrollment << endl;
	cout << "Subject wise Result" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "-----------------" << endl;
		cout << "Subject Name: " << s.subjects[i].subject_name << endl;
		cout << "Credit Hours: " << s.subjects[i].credit_hours << endl;
		cout << "Total Marks: " << s.subjects[i].total_marks << endl;
		cout << "Grade: " << s.subjects[i].grade << endl;
		cout << "Grade Point: " << s.subjects[i].grade_point << endl;
	}
	cout << "Final GPA: " << GPA << endl;
	return 0;
}
