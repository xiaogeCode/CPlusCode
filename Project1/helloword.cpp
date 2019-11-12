#include<iostream>
using namespace std;
//1.#define 宏常量
//2.const 修饰的变量
#define Day 7
int main1() {
	const int month = 12;
	cout << "double :" << sizeof(double) << endl;
	string word = "good luck";
	//短整型 -32768--32767
	short num1 = 32767;
	//整型
	int num2 = 10;
	//长整型
	long num3 = 10;
	//长长整型
	long long num4 = 10;

	float f = 30.1415926f;
	double d = 30.1415926;

	//科学计数法

	float f2 = 4e-2; //3*10`2
	cout << "helloword :" <<f2<<"  : "<<d<<"  :"<<sizeof(d)<< endl;
	//system("pause");
	return 0;
}