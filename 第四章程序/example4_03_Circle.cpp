//�ڶ����ļ���example4_03_Circle.cpp:��ʾԲ���ʵ��
#include"example4_03_Circle.h"//����ͷ�ļ�
double Circle::Area() //��Բ�����
{
	
	return PI*Radius*Radius;
}
double Circle::Circumference() //��Բ���ܳ�
{
	return PI * 2 * Radius;
}
const double Circle::PI = 3.14;
