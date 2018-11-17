//第三个文件：example4_03.cpp:定义主函数，定义对象并调用相应的函数
#include<iostream>      //包含系统文件
using namespace std;
#include"example4_03_Circle.h"   //包含自定义头文件
int main()
{
	Circle c1(3.5), c2;//定义类的两个对象，c2的半径用默认值
	cout << "area of c1=" << c1.Area() << ",circumference of c1=" << c1.Circumference() << endl;    //area of c1=38.4845,circumference of c1=21.9911
	cout << "area of c2=" << c2.Area() << ",circumference of c2=" << c2.Circumference() << endl;    //area of c2=0,circumference of c2=0
	system("pause");
	return 0;
}