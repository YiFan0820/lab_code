/*************************************************
** 功能 : 对象成员的构造与析构  
** 作者 : Yifan Yang/tsingke@sdnu.edu.cn
** 版本 : 2018-11-25 / 08:07
** 版权 : GNU General Public License(GNU GPL)
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
	B(int a,int b,int c):a2(b),a1(a)		//初始化列表中是成员对象名a1，a2，而不是类名A；
	{
		cout << "B:y=" <<c<< endl;
	}
private:
	A a1,a2;			//对象成员，B类包含A类；
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