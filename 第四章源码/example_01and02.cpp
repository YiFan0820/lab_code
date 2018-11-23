#include <iostream>
using namespace std;
#pragma warning(disable:4996)
class Student
{
private:
	int num;
	char name[20];
	//static int total;   //私有数据成员不能被类的外部函数访问；
public:
	static int total;   //公有数据成员；
	Student() { total++; }  //构造函数声明；
	~Student() { total--; };       //析构函数声明；
	Student(int n, const char *p = "Wang");
	void Getname();
	int Getnum();
};
int Student::total ;
Student::Student(int n, const char *p )   //此处不能再带默认值
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::Getname()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;	
}


int main()
{
	cout << "The number of all students:" << Student::total << endl;    //公有静态数据成员访问形式之一
	Student *p = new Student(13);    //用指针申请动态空间并得到对象*p
	//cout << "The number of all students:" << Student::total << endl;
	cout << "The number of all students:" << p->total << endl;
	cout << "The number of all students:" << (*p).total << endl;
	delete p;
	cout << "The number of all students:" << Student::total << endl;
	Student s[2];
	cout << "The number of all students:" << s[0].total << endl;
	cout << "The number of all students:" << s[1].total << endl;
	system("pause");
	return 0;
}
