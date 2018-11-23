#include "Student.h"
#include <stdio.h>
#include <iostream>
using namespace std;

const int N = 10;
//int a;    //��¼¼���ѧ���ĸ�����
char c;

//
void menu();
void InputStu(Student *array);
int SearchStu(const Student *array, char *na);	//ָ����ʽ����ǰ��const������
void OutputStu(const Student *array);			//ָ����ʽ����ǰ��const������
bool InsertStu(Student *array);
bool DeleteStu(Student *array, char *na);

int main()
{
	Student array[N];   //����ѧ���������飻
	//cout << array[0].getage()<< endl;
	int choice;
	char na[20];
	do 
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if ((choice >= 0) && (choice <= 5))
		{
			switch (choice)
			{
			case 1:InputStu(array); break;
			case 2:
				cout << "Input the name searched:" << endl;
				cin >> na;
				int i;
				i = SearchStu(array, na);
				if (i == N)
					cout << "No this person!" << endl;
				else
					array[i].Display();
				break;
			case 3:OutputStu(array); break;
			case 4:
				if (InsertStu(array))
					cout << "�ɹ�����һ����¼\n";
				else
					cout << "����ʧ�ܣ�\n";
				break;
			case 5:
				cout << "Input the name deleted:" << endl;
				cin >> na;
				if (DeleteStu(array, na))
					cout << "�ɹ�ɾ��һ����¼\n";
				else
					cout << "ɾ��ʧ�ܣ�\n";
				break;
			default:break;
			}
		}
	} while (choice);
	system("pause");
	

	//do
	//{
	//	menu();
	//	cout << "����������ѡ��:";
	//	cin >> choice;
	//	if ((choice >= 0) && (choice <= 5))
	//	{
	//		switch (choice)
	//		{
	//		case 1:
	//			InputStu(array); break;
	//		case 2:
	//			cout << "\n��������Ҫ��ѯ��ѧ����������" << endl;
	//			int i,flag;
	//			do 
	//			{
	//				char na[10];
	//				cin >> na;
	//				flag = 0;            //��Ϊ�Ƿ������ѯѧ���ı�־��
	//				i = SearchStu(array, na);
	//				if (i == N)
	//					cout << "���޴��ˣ�" << endl;
	//				else
	//				{
	//					array[i].Display();
	//					flag = 1;
	//					cout << flag << endl;
	//					//if (a = 1) break;
	//					//else
	//					//{
	//						cout << "�Ƿ�Ҫ���ص������棿" << endl;
	//						cin >> c;
	//						if (c == 'Y')break;
	//						else cout << "��������Ҫ��ѯ��ѧ����������" << endl;
	//					//}
	//				}
	//				
	//				
	//					
	//			} while (flag);
	//			
	//			break;
	//		case 3:
	//			OutputStu(array); break;
	//		default:break;
	//		}
	//	}
	//} while (choice);
	return 0;
}
void menu()
{
	cout << "*******1.¼����Ϣ*******" << endl;
	cout << "*******2.��ѯ��Ϣ*******" << endl;
	cout << "*******3.�����Ϣ*******" << endl;
	cout << "*******4.������Ϣ*******" << endl;
	cout << "*******5.ɾ����Ϣ*******" << endl;
	cout << "*******0.�˳�*******" << endl;
}

//*********************************//
void InputStu(Student *array)
{
	char ch;
	int i = 0;
	do
	{
		if (Student::GetCount() == N)
			cout << "�����������޷���¼��!" << endl;
		if (!array[i].getage())
			array[i++].input();				//��ִ��array[i].input,��i++;
		cout << "����Ҫ����¼����(Y or N)��" << endl;
		cin >> ch;
	} while (ch == 'Y');
}

//*********************************//
int SearchStu(const Student *array, char*na)
{
	int i, j=N;
	for (i = 0;i <N;i++)
	{
		if(array[i].getage())						//��֤����Ч��¼��
			if (strcmp(array[i].getname(), na) == 0)
			{
				j = i;
				break;				//�ҵ�������ѭ��������ִ�в���Ҫ��ѭ��
			}			
	}
	return j;

}


//*********************************//
void OutputStu(const Student *array)
{
	cout << "ѧ��������=" << Student::GetCount() << endl;
	for (int i = 0; i < N; i++)
	{
		if (array[i].getage())
			array[i].Display();
	}
	/*for (int i = 0; i < a; i++)
	{
		array[i].Display();
	}*/
}

bool InsertStu(Student *array)
{
	if (Student::GetCount() == N)
	{
		cout << "�����������޷�����¼�룡\n";
		return false;
	}
	else
	{
		for (int i = 0; array[i].getage(); i++)		//�ҵ�һ������Ϊ0�Ŀ�λ�ã��ڸ�λ�ò���һ��ѧ������Ϣ;
		{
			array[i].Insert();
		}
	}
	return true;
}

bool DeleteStu(Student *array, char *na)
{
	if (Student::GetCount() == 0)
	{
		cout << "û�м�¼���޷�ɾ����\n";
		return false;
	}
	int i = SearchStu(array, na);			//���ò��Һ������жϴ����Ƿ����
	if (i == N)
	{
		cout << "���޴���,�޷�ɾ��\n";
		return false;
	}
	array[i].Delete();			//����ֱ��ɾ����
	return true;
}







