//example4_01.cpp:静态数据成员使用示例
#include<iostream>
using namespace std;
#pragma warning(disable:4996)
class Student
{
private:
	int num;
	char name[20];
	static int total;  //私有的静态数据成员
public:

	Student() { total++; } //构造函数每定义一个新对象，则total加1
	~Student() { total--; }//析构函数，每一个对象生命期结束则total减1
	Student(int n, char* p = "Wang");
	void GetName();
	int Getnum();
	static void Print(); //声明一个公有的静态成员函数
};
//int Student::total;
int Student::total = 0; //静态数据成员的初始化
Student::Student(int n, char* p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::GetName()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
void Student::Print() //定义公有静态成员函数，此处不能再加stastic
{
	cout << "The number of all students:" << total << endl;
}
int main()
{
	Student::Print();     //无对象时可以用类名：静态成员函数名（）形式输出total The number of all students:0
	Student *p = new Student(13);//用指针申请动态空间并得到对象*p
	Student::Print();    //用类名：静态成员函数名（）输出total            The number of all students:1
	p->Print();//用指针所指的对象去访问静态成员函数名（）                 The number of all students:1
	delete p;  // 通过指针删除动态对象，析构一次
	p->Print();
	//Student::Print();//用类名：：静态成员函数名（）输出total              The number of all students:1
	Student s[2];   //定义两个对象，构造函数调用两次
	Student::Print();   //这两次输出结果一定相同              The number of all students:2
	Student::Print();                                         //The number of all students:2
	system("pause");
	return 0;
}