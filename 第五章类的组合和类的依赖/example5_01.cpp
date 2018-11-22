//example5_01.cpp:对象成员的构造和析构、
#include<iostream>
using namespace std;
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
		getchar();
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
		getchar();
	}
private:                                             //对象成员，B类包含A类

	A a;

};
int main()
{
	B obj;
	return 0;
}