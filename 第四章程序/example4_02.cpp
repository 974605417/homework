//example4_01.cpp:��̬���ݳ�Աʹ��ʾ��
#include<iostream>
using namespace std;
#pragma warning(disable:4996)
class Student
{
private:
	int num;
	char name[20];
	static int total;  //˽�еľ�̬���ݳ�Ա
public:

	Student() { total++; } //���캯��ÿ����һ���¶�����total��1
	~Student() { total--; }//����������ÿһ�����������ڽ�����total��1
	Student(int n, char* p = "Wang");
	void GetName();
	int Getnum();
	static void Print(); //����һ�����еľ�̬��Ա����
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
void Student::Print() //���幫�о�̬��Ա�������˴������ټ�stastic
{
	cout << "The number of all students:" << total << endl;
}
int main()
{
	Student::Print();     //�޶���ʱ��������������̬��Ա������������ʽ���total The number of all students:0
	Student *p = new Student(13);//��ָ�����붯̬�ռ䲢�õ�����*p
	Student::Print();    //����������̬��Ա�������������total            The number of all students:1
	p->Print();//��ָ����ָ�Ķ���ȥ���ʾ�̬��Ա����������                 The number of all students:1
	delete p;  // ͨ��ָ��ɾ����̬��������һ��
	p->Print();
	//Student::Print();//������������̬��Ա�������������total              The number of all students:1
	Student s[2];   //�����������󣬹��캯����������
	Student::Print();   //������������һ����ͬ              The number of all students:2
	Student::Print();                                         //The number of all students:2
	system("pause");
	return 0;
}