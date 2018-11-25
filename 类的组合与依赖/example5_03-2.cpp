/*************************************************
** 功能 : 用类实现掷骰子
** 作者 : Yifan Yang/tsingke@sdnu.edu.cn
** 版本 : 2018-11-25 / 08:29
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

/*----------------------------------*
		 Class Defination
*-----------------------------------*/
class Dice
{
public:
	int run()
	{
		return (rand() % 6 + 1);
	}
};
class Gambler		//赌徒类
{
public:
	void play()			//一个对象中某一函数的实现需要另一个另一个对象
	{
		int num1, num2, num3;
		num1 = a.run();
		num2 = b.run();
		num3 = c.run();
		if (num1 == num2 && num1 == num3)
			cout << num1 << " " << num2 << " " << num3 << "豹子" << endl;
		else if (num1 + num2 + num3 > 10)
			cout << num1 << " " << num2 << " " << num3 << "大" << endl;
		else
			cout << num1 << " " << num2 << " " << num3 << "小" << endl;
	}
private:
	Dice a, b, c;		//Gambler类包含Dice类  Dice类中无私有成员
};



/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	//Dice d1, d2, d3;
	Gambler Jack;
	srand(time(NULL));			//若被注释掉，则每次的随机数为伪随机数，都是一样的
	Jack.play();
	system("pause");

	return 0;
}