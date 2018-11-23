#ifndef _Circle		//条件编译，避免重复包含
#define _Circle
class Circle
{
private:
	double Radius;
	const double PI;
public:
	Circle(double r = 0) :PI(3.1415926)			
	{								
		//PI = 3.1415926;
		Radius = r;
	}
	double Area();
	double Circumference();
	double GetRadius()const;
};
#endif