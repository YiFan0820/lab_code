#include <iostream>
using namespace std;
#include<string>
#pragma warning(disable:4996)

class Person
{
private:
	int age;
	char *name;
public:
	Person(int n = 1, const char *na = "Zhuli");
	~Person();		
	void Print();			//重载函数，用于输出普通成员函数
	void Print() const;		//重载函数  常成员函数
	void ModifAge();		//修改年龄的普通成员函数
};
Person::Person(int n, const char *na)
{
	age = n;	
	name = new char(strlen(na) + 1);
	strcpy(name, na);
}
Person::~Person()
{
	cout << "Destructed!" << endl;
}
void Person::Print()
{
	cout << "age: " << age << " \tname: " << name << endl;
	cout << "This is a general output" << endl;
}

void Person::Print() const
{
	cout << "age: " << age << "\tname: " << name << endl;
	cout << "This is a const output" << endl;
}
void Person::ModifAge()
{
	age++;
}

int main()
{
	const Person p1(17, "wang");			//定义常对象必须初始化
	cout << "Output const object p1" << endl;
	p1.Print();							//输出年龄与姓名
	Person p2(18, "zhang");			//普通对象
	cout << "Output const object p2" << endl;
	p2.ModifAge();
	p2.Print();
	system("pause");
	return 0;
}


