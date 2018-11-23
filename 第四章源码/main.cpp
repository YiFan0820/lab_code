#include "Student.h"
#include <stdio.h>
#include <iostream>
using namespace std;

const int N = 10;
//int a;    //记录录入的学生的个数；
char c;

//
void menu();
void InputStu(Student *array);
int SearchStu(const Student *array, char *na);	//指针形式参数前加const保护；
void OutputStu(const Student *array);			//指针形式参数前加const保护；
bool InsertStu(Student *array);
bool DeleteStu(Student *array, char *na);

int main()
{
	Student array[N];   //定义学生对象数组；
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
					cout << "成功插入一条记录\n";
				else
					cout << "插入失败！\n";
				break;
			case 5:
				cout << "Input the name deleted:" << endl;
				cin >> na;
				if (DeleteStu(array, na))
					cout << "成功删除一条记录\n";
				else
					cout << "删除失败！\n";
				break;
			default:break;
			}
		}
	} while (choice);
	system("pause");
	

	//do
	//{
	//	menu();
	//	cout << "请输入您的选择:";
	//	cin >> choice;
	//	if ((choice >= 0) && (choice <= 5))
	//	{
	//		switch (choice)
	//		{
	//		case 1:
	//			InputStu(array); break;
	//		case 2:
	//			cout << "\n请输入您要查询的学生的姓名：" << endl;
	//			int i,flag;
	//			do 
	//			{
	//				char na[10];
	//				cin >> na;
	//				flag = 0;            //作为是否继续查询学生的标志；
	//				i = SearchStu(array, na);
	//				if (i == N)
	//					cout << "查无此人！" << endl;
	//				else
	//				{
	//					array[i].Display();
	//					flag = 1;
	//					cout << flag << endl;
	//					//if (a = 1) break;
	//					//else
	//					//{
	//						cout << "是否要返回到主界面？" << endl;
	//						cin >> c;
	//						if (c == 'Y')break;
	//						else cout << "请输入您要查询的学生的姓名：" << endl;
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
	cout << "*******1.录入信息*******" << endl;
	cout << "*******2.查询信息*******" << endl;
	cout << "*******3.浏览信息*******" << endl;
	cout << "*******4.插入信息*******" << endl;
	cout << "*******5.删除信息*******" << endl;
	cout << "*******0.退出*******" << endl;
}

//*********************************//
void InputStu(Student *array)
{
	char ch;
	int i = 0;
	do
	{
		if (Student::GetCount() == N)
			cout << "人数已满，无法再录入!" << endl;
		if (!array[i].getage())
			array[i++].input();				//先执行array[i].input,再i++;
		cout << "还需要继续录入吗(Y or N)？" << endl;
		cin >> ch;
	} while (ch == 'Y');
}

//*********************************//
int SearchStu(const Student *array, char*na)
{
	int i, j=N;
	for (i = 0;i <N;i++)
	{
		if(array[i].getage())						//保证是有效记录；
			if (strcmp(array[i].getname(), na) == 0)
			{
				j = i;
				break;				//找到就跳出循环，以免执行不必要的循环
			}			
	}
	return j;

}


//*********************************//
void OutputStu(const Student *array)
{
	cout << "学生总人数=" << Student::GetCount() << endl;
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
		cout << "人数已满，无法插入录入！\n";
		return false;
	}
	else
	{
		for (int i = 0; array[i].getage(); i++)		//找第一个年龄为0的空位置，在该位置插入一个学生的信息;
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
		cout << "没有记录，无法删除！\n";
		return false;
	}
	int i = SearchStu(array, na);			//调用查找函数，判断此人是否存在
	if (i == N)
	{
		cout << "查无此人,无法删除\n";
		return false;
	}
	array[i].Delete();			//存在直接删除；
	return true;
}







