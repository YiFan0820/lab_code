/*************************************************
** ���� : ����ʵ��������
** ���� : Yifan Yang/tsingke@sdnu.edu.cn
** �汾 : 2018-11-25 / 08:29
** ��Ȩ : GNU General Public License(GNU GPL)
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
class Gambler		//��ͽ��
{
public:
	void play()			//һ��������ĳһ������ʵ����Ҫ��һ����һ������
	{
		int num1, num2, num3;
		num1 = a.run();
		num2 = b.run();
		num3 = c.run();
		if (num1 == num2 && num1 == num3)
			cout << num1 << " " << num2 << " " << num3 << "����" << endl;
		else if (num1 + num2 + num3 > 10)
			cout << num1 << " " << num2 << " " << num3 << "��" << endl;
		else
			cout << num1 << " " << num2 << " " << num3 << "С" << endl;
	}
private:
	Dice a, b, c;		//Gambler�����Dice��  Dice������˽�г�Ա
};



/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	//Dice d1, d2, d3;
	Gambler Jack;
	srand(time(NULL));			//����ע�͵�����ÿ�ε������Ϊα�����������һ����
	Jack.play();
	system("pause");

	return 0;
}