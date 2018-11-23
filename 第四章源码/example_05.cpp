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
	void Print();			//���غ��������������ͨ��Ա����
	void Print() const;		//���غ���  ����Ա����
	void ModifAge();		//�޸��������ͨ��Ա����
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
	const Person p1(17, "wang");			//���峣��������ʼ��
	cout << "Output const object p1" << endl;
	p1.Print();							//�������������
	Person p2(18, "zhang");			//��ͨ����
	cout << "Output const object p2" << endl;
	p2.ModifAge();
	p2.Print();
	system("pause");
	return 0;
}


