#include<iostream>
using namespace std;
//1.#define �곣��
//2.const ���εı���
#define Day 7
int main1() {
	const int month = 12;
	cout << "double :" << sizeof(double) << endl;
	string word = "good luck";
	//������ -32768--32767
	short num1 = 32767;
	//����
	int num2 = 10;
	//������
	long num3 = 10;
	//��������
	long long num4 = 10;

	float f = 30.1415926f;
	double d = 30.1415926;

	//��ѧ������

	float f2 = 4e-2; //3*10`2
	cout << "helloword :" <<f2<<"  : "<<d<<"  :"<<sizeof(d)<< endl;
	//system("pause");
	return 0;
}