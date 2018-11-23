#include <iostream>
using namespace std;
#pragma warning(disable:4996)
class Student
{
private:
	int num;
	char name[20];
	//static int total;   //˽�����ݳ�Ա���ܱ�����ⲿ�������ʣ�
public:
	static int total;   //�������ݳ�Ա��
	Student() { total++; }  //���캯��������
	~Student() { total--; };       //��������������
	Student(int n, const char *p = "Wang");
	void Getname();
	int Getnum();
};
int Student::total ;
Student::Student(int n, const char *p )   //�˴������ٴ�Ĭ��ֵ
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
	cout << "The number of all students:" << Student::total << endl;    //���о�̬���ݳ�Ա������ʽ֮һ
	Student *p = new Student(13);    //��ָ�����붯̬�ռ䲢�õ�����*p
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
