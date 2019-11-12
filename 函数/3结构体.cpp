#include<iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};
struct Teacher {
	string name;
	int age;
	Student stu;
};

void printStudent1(Student stu);
void printStudent2(Student *stu);
int main3() {
	Student s1;
	s1.name = "lisi";
	s1.age = 15;
	s1.score = 55;
	Student s2 = {"laowang",52,36};
	

	Student s3[] = {
		{"zhangsan",25,78},
		{"lisi",95,78},
		{"wangwu",45,98},
	};
	
	for (Student stu : s3)
	{
		cout << stu.name << stu.age << stu.score << endl;

	}
	//指针指向结构体变量
	Student* p = &s1;
	cout << p->name << p->age << p->score << endl;
	
	p = &s2;
	cout << p->name << p->age << p->score << endl;
	
	//printStudent2(p);

	//cout << s2.name << s2.age << s2.score << endl;


	Teacher teac;
	teac.age = 85;
	teac.name = "dfdf";
	teac.stu = { "lisi",95,78 };



	return 0;
}
//打印结构体 Student 的信息 值传递
void printStudent1(Student stu) {
	cout << stu.name << stu.age << stu.score << endl;
}
//打印结构体 Student 的信息 地址传递 加入const 保护数据，让其不可修改
void printStudent2(const Student *stu) {
	cout << stu->name << stu->age << stu->score << endl;
}
