#include<iostream>
using namespace std;
int main() {
	int a = 10;
	//定义指针
	int* p;
	//指针记录变量a的地址
	p = &a;
	//使用指针,*代表引用，找到指针指向的内存中的数据
	cout << *p << endl;
	cout << sizeof(double *) << endl;
	//空指针：指针变量指向内存中编号为0的空间 用途：初始化指针变量 注意：空指针指向的内存是不可以访问的
	int* p1 = NULL;
	//*p1 = 100;  错误，空指针不可访问



	int a1 = 10;
	int b1 = 10;
	//const修饰指针有三种情况
	//const修饰指针  -- 常量指针
	//const修饰常量  -- 指针常量
	//const修饰指针和常量

	//const修饰指针  -- 常量指针  指针的地址可以修改，指针指向的值不可以改
	const int* cp1 = &a1;
	//*cp1 = 20; 错误 指针指向的值不可以改
	//cp1 = &b1; 正确 指针的地址可以修改

	//const修饰常量  -- 指针常量 指针的地址不可以修改，指针指向的值可以改
	int* const cp2 = &a1;
	//*cp2 = 20; 正确 指针指向的值可以改
	//cp2 = &b1; 错误 指针的地址不可以修改

	//const修饰指针和常量--指针的地址不可以修改，指针指向的值不可以改
	const int* const cp3 = &a1;
		//*cp3 = 20; 错误 指针指向的值不可以改
		//cp3 = &b1; 错误 指针的地址不可以修改

	return 0;
}