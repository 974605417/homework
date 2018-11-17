//��һ���ļ���example4_06_student.h:����ѧ����
#pragma warning(disable:4996)

#pragma once
#ifdef _STUDENT
#endif // _STUDENT
#include<iostream>
#include<string>
using namespace std;
#define Size 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char speciality[20];
	int age;
	static int count;   //ʵ����Ч��ѧ��������С�ڵ��ڶ���ĸ���
public:
	Student();
	Student(char* na, char* id, char* num, char* spec, int ag);
	Student(const Student &per);
	~Student();
	char* GetName() const;   //���Զ���Ϊ����Ա����
	char* GetID();           //�����Զ���Ϊ����Ա����
	char* GetNumber();       //�����Զ���Ϊ����Ա����
	char* GetSpec();         //�����Զ���Ϊ����Ա����
	int GetAge() const;
	void Display() const;
	void Input();
	void Insert();
	void Delete();
	static int GetCount(); //�����ӵľ�̬��Ա����
};
