#include "example4_04_Circle.h"
double Circle::Area()
{
	//Radius *= 2;
	//double a = GetRadius();		//��ͨ��Ա����������ó���Ա������
	return PI*Radius*Radius;
}
double Circle::Circumference()
{

	return 2 * PI*Radius;
}
double Circle::GetRadius()const
{
	//Radius *= 2;				//���ʽ�����ǿ��޸ĵ���ֵ��ͨ������Ա�������ʡ�Radius�����޷������޸ġ�
	//double a = Area();			//�����������ڳ���Ա�������ڵ�����ͨ��Ա������
	return Radius;
}