/*************************************************
** ���� : �����Ա�Ĺ���������
** ���� : Yifan Yang/tsingke@sdnu.edu.cn
** �汾 : 2018-11-25 / 08:07
** ��Ȩ : GNU General Public License(GNU GPL)
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

/*----------------------------------*
		 Class Defination
*-----------------------------------*/
class A
{
public:
	A()
	{
		cout << "����A" << endl;
	}
	~A()
	{
		cout << "����A" << endl;
	}
};
class B
{
public:
	B()
	{
		cout << "����B" << endl;
	}
	~B()
	{
		cout << "����B" << endl;
	}
private:
	A a;            //�����Ա��B�����A�ࣻ
};



/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	B obj;
	system("pause");
	return 0;

}
