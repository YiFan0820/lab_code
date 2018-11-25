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
	A()
	{
		cout << "创建A" << endl;
	}
	~A()
	{
		cout << "析构A" << endl;
	}
};
class B
{
public:
	B()
	{
		cout << "创建B" << endl;
	}
	~B()
	{
		cout << "析构B" << endl;
	}
private:
	A a;            //对象成员，B类包含A类；
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
