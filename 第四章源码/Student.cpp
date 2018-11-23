
#include "Student.h"
#include <string>
#pragma warning(disable:4996)

int Student::count = 0;   //静态数据成员赋值
Student::Student()
{
	name = NULL;
	age = 0;
}


Student::Student(char *na, char *id, char *num, char * spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(speciality, spec);
	age = ag;
	count++;
}



Student::Student(const Student &per)
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy_s(ID, per.ID);
	strcpy_s(number, per.number);
	strcpy_s(speciality, per.speciality);
	age = per.age;
	count++;
}
Student::~Student()
{
	if (name)
	{
		delete[]name;
	}
	count--;
}
char *Student::getname() const
{
	return name;
}

char *Student::getID()
{
	return ID;
}

char *Student::getnumber()
{
	return number;
}

char *Student::getspec()
{
	return speciality;
}

int Student::getage() const
{
	return age;
}

void Student::Display() const
{
	//输出数据信息；
	cout << "\n姓名：" << name << endl;
	cout << "\nID:" << ID << endl;
	cout << "\n学号：" << number << endl;
	cout << "\n年龄：" << age << endl;
	cout << "\n专业：" << speciality << endl;

}

void Student::input()                       //输入学生信息函数
{
	char na[10];
	cout << "请输入要录入的学生的姓名" << endl;
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na)+1];
	strcpy(name, na);
	cout << "请输入该同学的ID：";
	cin >> ID;
	cout << "请输入该同学的学号：";
	cin >> number;
	cout << "请输入该同学的年龄：";
	cin >> age;
	cout << "请输入该同学的专业：";
	cin >> speciality;
	count++;			//此句增加，每输入一个，学生总数加1；
}
void Student::Insert()		//新增
{
	if (!age)					//当对象的age成员值为0时，在此调用input()函数重新输入对象的值
		input();		
}
void Student::Delete()
{
	age = 0;			//只简单将age置0，而不移动数组元素；
	count--;
}
int Student::GetCount()			//新增静态成员函数，专门用来访问静态数据成员
{
	return  count;
}