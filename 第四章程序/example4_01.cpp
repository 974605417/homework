//example4_01.cpp:��̬���ݳ�Աʹ��ʾ��
#include<iostream>
using namespace std;
#pragma warning(disable:4996)
class Student 
{
private:
	int num;
	char name[20];
	static int total;  //���еľ�̬���ݳ�Ա
public:

	Student() { total++; } //���캯��ÿ����һ���¶�����total��1
	~Student() { total--; }//����������ÿһ�����������ڽ�����total��1
	Student(int n, char* p = "Wang");
	void GetName();
	int Getnum();
};
//int Student::total;
int Student::total = 0; //��̬���ݳ�Ա�ĳ�ʼ��
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
int main()
{
	cout << "The number of all students:" << Student::total << endl;//�޶���ʱ������������̬��Ա����ʽ����  The number of all students:0
	Student *p = new Student(13);//��ָ�����붯̬�ռ䲢�õ�����*p
	cout << "The number of all students:" << Student::total << endl;//����������̬��Ա����ʽ����  The number of all students:1
	cout << "The number of all students:" << p->total << endl;//��ָ����ָ��Ķ������    The number of all students:1
	delete p;
	cout << "The number of all students:" << Student::total << endl;//����������̬��Ա����ʽ����   The number of all students:0
	Student s[2]; //�����������󣬹��캯����������
	cout << "The number of all students:" << s[0].total << endl;//������������һ����ͬ    The number of all students:2
	cout << "The number of all students:" << s[1].total << endl;//The number of all studnets:2
	system("pause");
	return 0;
}