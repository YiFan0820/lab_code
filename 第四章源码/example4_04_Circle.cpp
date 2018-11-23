#include "example4_04_Circle.h"
double Circle::Area()
{
	//Radius *= 2;
	//double a = GetRadius();		//普通成员函数允许调用常成员函数。
	return PI*Radius*Radius;
}
double Circle::Circumference()
{

	return 2 * PI*Radius;
}
double Circle::GetRadius()const
{
	//Radius *= 2;				//表达式必须是可修改的左值，通过常成员函数访问“Radius”，无法对其修改。
	//double a = Area();			//报错。不允许在常成员函数体内调用普通成员函数。
	return Radius;
}