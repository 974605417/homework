//example4_05.cpp:����Ա�����볣�����ʹ��
#include<iostream>
#include<string>
using namespace std;
#pragma warning (disable:4996)

class Person
{
private:
	int age;
	char*name;
public:
	Person(int n = 1, char* na = "Zhuli");//���캯��
	~Person();
	void Print();//���غ��������������ͨ��Ա����
	//void Print() const;//���غ����������������Ա������const��������
	void ModifyAge();//�����޸��������ͨ��Ա����
};
Person::Person(int n, char* na) //���캯���Ķ���
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
}
Person::~Person()//���������Ķ���
{
	delete[]name;
}
void Person::Print()  //��ͨ��Ա����Print()�Ķ���
{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This is general Print()." << endl;
}
/*
void Person::Print() const //����Ա����Print()�Ķ��壬const���ܺ���

{
	cout << "age:" << age << "name:" << name << endl;
	cout << "This  is const Print()." << endl;
}*/
void Person::ModifyAge() //�����޸��������ͨ��Ա����
{
	age++;

}
int main()
{
	const Person p1(17, "wu");//�������ʱ�����ʼ��
	cout << "Output const object p1" << endl;
	p1.Print();//��������ó���Ա����
	Person p2(18, "zhang");
	cout << "Output const object p2" << endl;
	p2.ModifyAge(); //�����޸����ݳ�Ա����
	p2.Print();//��ͨ���������ͨ�ĳ�Ա����
	system("pause");
	return 0;
}