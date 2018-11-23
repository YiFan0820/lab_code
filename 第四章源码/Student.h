#pragma once




#include <iostream>
using namespace std;

class Student
{
	char *name;
	char ID[19];
	char number[10];   //ѧ�ţ�
	int age;
	char speciality[20];   //רҵ��
	static int count;		//ʵ����Ч��ѧ��������С�ڵ��ڶ���������������κζ���
public:
	Student();
	Student(char *na, char *id, char *num, char * spec, int ag);
	Student(const Student &per);
	~Student();
	char *getname() const;  //��ȡ������  ���Զ���Ϊ����Ա����
	char *getID();			//��ȡID;
	char *getnumber();  //��ȡѧ�ţ�
	char *getspec();    //��ȡרҵ��Ϣ
	int getage() const;
	void Display() const;       //��ʾѧ����Ϣ��
	void input();           //����ѧ����Ϣ
	void Insert();
	void Delete();
	static int GetCount();		//�����ӵľ�̬��Ա����
};
