//�������ļ���example4_03.cpp:������������������󲢵�����Ӧ�ĺ���
#include<iostream>      //����ϵͳ�ļ�
using namespace std;
#include"example4_03_Circle.h"   //�����Զ���ͷ�ļ�
int main()
{
	Circle c1(3.5), c2;//���������������c2�İ뾶��Ĭ��ֵ
	cout << "area of c1=" << c1.Area() << ",circumference of c1=" << c1.Circumference() << endl;    //area of c1=38.4845,circumference of c1=21.9911
	cout << "area of c2=" << c2.Area() << ",circumference of c2=" << c2.Circumference() << endl;    //area of c2=0,circumference of c2=0
	system("pause");
	return 0;
}