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
	A(int a)
	{
		x = a;
		cout << "A:x=" <<a<< endl;
	}
private:
	int x;
};
class B
{
public:
	B(int a,int b,int c):a2(b),a1(a)		//��ʼ���б����ǳ�Ա������a1��a2������������A��
	{
		cout << "B:y=" <<c<< endl;
	}
private:
	A a1,a2;			//�����Ա��B�����A�ࣻ
	int y;
};
	


/*----------------------------------*
          Main Function
*-----------------------------------*/

int main()
{
	B obj(10,20,30);
	system("pause");
	return 0;
	
}