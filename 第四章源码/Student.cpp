
#include "Student.h"
#include <string>
#pragma warning(disable:4996)

int Student::count = 0;   //��̬���ݳ�Ա��ֵ
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
	//���������Ϣ��
	cout << "\n������" << name << endl;
	cout << "\nID:" << ID << endl;
	cout << "\nѧ�ţ�" << number << endl;
	cout << "\n���䣺" << age << endl;
	cout << "\nרҵ��" << speciality << endl;

}

void Student::input()                       //����ѧ����Ϣ����
{
	char na[10];
	cout << "������Ҫ¼���ѧ��������" << endl;
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na)+1];
	strcpy(name, na);
	cout << "�������ͬѧ��ID��";
	cin >> ID;
	cout << "�������ͬѧ��ѧ�ţ�";
	cin >> number;
	cout << "�������ͬѧ�����䣺";
	cin >> age;
	cout << "�������ͬѧ��רҵ��";
	cin >> speciality;
	count++;			//�˾����ӣ�ÿ����һ����ѧ��������1��
}
void Student::Insert()		//����
{
	if (!age)					//�������age��ԱֵΪ0ʱ���ڴ˵���input()����������������ֵ
		input();		
}
void Student::Delete()
{
	age = 0;			//ֻ�򵥽�age��0�������ƶ�����Ԫ�أ�
	count--;
}
int Student::GetCount()			//������̬��Ա������ר���������ʾ�̬���ݳ�Ա
{
	return  count;
}