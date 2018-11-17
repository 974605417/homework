#pragma once
//第一个文件：e
#ifdef _Circle    //条件编译，避免重复包含
#endif // _Circle 
#define _Circle   //宏名不要与类名相同
class Circle
{
private:
	double Radius;//定义圆的半径
	static const double PI;//定义一个常数据成员PI代表圆周率
public:
	Circle(double r = 0) //只能通过初始化列表初始化常数据成员
	{
		Radius = r;
	}
	double Area();//求圆的面积
	double Circumference();//求圆的周长
};