//第三个文件：example4_04.cpp：定义主函数，定义对象并调用相应函数
#include<iostream>           //包含系统文件
using namespace std;
#include"example4_04_Circle.h" //包含自定义头文件
int main()
{
	Circle c1(3.5), c2;//定义类的两个对象，c2的半径值用默认值
	cout << "radius of c1=" << c1.GetRadius(); //调用常成员函数输出半径 radius of c1=3.5
	cout << ",area of c1=" << c1.Area() << ",circumference of c1=" << c1.Circumference() << endl;  //,area of c1=38.4845,circumference of c1=21..9911
	cout << "radius of c2=" << c2.GetRadius(); //调用常成员函数输出半径     radius of c2=0
	cout << ",area of c2=" << c2.Area() << ",circumference of c1=" << c2.Circumference() << endl;  //,area of c2=0,circumference of c1=0
	system("pause");
	return 0;
}