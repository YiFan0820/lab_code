#pragma once




#include <iostream>
using namespace std;

class Student
{
	char *name;
	char ID[19];
	char number[10];   //学号；
	int age;
	char speciality[20];   //专业；
	static int count;		//实际有效的学生个数，小于等于对象个数，不属于任何对象
public:
	Student();
	Student(char *na, char *id, char *num, char * spec, int ag);
	Student(const Student &per);
	~Student();
	char *getname() const;  //获取姓名；  可以定义为常成员函数
	char *getID();			//获取ID;
	char *getnumber();  //获取学号；
	char *getspec();    //获取专业信息
	int getage() const;
	void Display() const;       //显示学生信息；
	void input();           //输入学生信息
	void Insert();
	void Delete();
	static int GetCount();		//新增加的静态成员函数
};
