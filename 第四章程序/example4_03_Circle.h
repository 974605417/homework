#pragma once
//��һ���ļ���e
#ifdef _Circle    //�������룬�����ظ�����
#endif // _Circle 
#define _Circle   //������Ҫ��������ͬ
class Circle
{
private:
	double Radius;//����Բ�İ뾶
	static const double PI;//����һ�������ݳ�ԱPI����Բ����
public:
	Circle(double r = 0) //ֻ��ͨ����ʼ���б��ʼ�������ݳ�Ա
	{
		Radius = r;
	}
	double Area();//��Բ�����
	double Circumference();//��Բ���ܳ�
};