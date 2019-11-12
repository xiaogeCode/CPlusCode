#include<iostream>
using namespace std;

//最大人数
#define MAX 1000		
//联系人结构体
struct Person {
	//姓名
	string pName;	
	//性别
	int sex;
	//年龄
	int age;
	//电话
	string phone;
	//家庭地址
	string addr;
};
//通讯录结构体
struct Addressbooks {
	Person pArray[MAX];
	int size;
};
void showMenu();
void addCon(Addressbooks* abs);
void showCon(Addressbooks* abs);
int isExistPerson(Addressbooks* abs, string name);
void deleCon(Addressbooks* book, int index);
void editCon(Addressbooks* book);

int main() {
	Addressbooks book;
	book.size = 0;

	while (true)
	{
		showMenu();
		int order;
		cin >> order;
		switch (order)
		{
		case 1: {//添加联系人
			addCon(&book);
			break;
		}
		case 2: {//显示
			showCon(&book);
			break;
		}
		case 3: {//删除
			string delName;
			if (book.size < 1)
			{
				cout << "通讯录没有联系人，不能删除" << endl;

			}
			else
			{
				cout << "输入你要删除的联系人名称：" << endl;
				cin >> delName;
				int ret = isExistPerson(&book, delName);
				if ( ret== -1)
				{
					cout << "联系人不存在" << endl;

					
				}
				else
				{
					deleCon(&book, ret);
				}

			}
			////按任意键继续
			//system("pause");
			////清屏
			//system("cls");
			break;
		}
		case 4: {//查找
			if (book.size < 1)
			{
				cout << "通讯录没有联系人，不能查找" << endl;

			}
			else {
				cout << "输入你要查找人的名字： ";
				string name;
				cin >> name;
				int ret = isExistPerson(&book, name);
				if (ret == -1)
				{
					cout << "查无此人" << endl;
				}
				else {
					cout << "姓名\t性别\t年龄\t电话\t家庭地址" << endl;
					string sexArray[] = { "男","女" };
					cout << book.pArray[ret].pName << "\t"
						<< (book.pArray[ret].sex==1?"男":"女")<< "\t"
						<< book.pArray[ret].age << "\t"
						<< book.pArray[ret].phone << "\t"
						<< book.pArray[ret].addr << "\t" << endl;
				}
			}
			////按任意键继续
			//system("pause");
			////清屏
			//system("cls");

			break;
		}
		case 5: {//修改
			if (book.size < 1)
			{
				cout << "通讯录没有联系人，不能修改" << endl;

			}
			else {
				editCon(&book);

			}
			break;
		}
		case 6: {//清空
			if (book.size < 1)
			{
				cout << "通讯录没有联系人，不需要清空" << endl;

			}
			else
			{
				book.size = 0;
				cout << "通讯录已清空" << endl;
			}
			break;
		}
		case 0: {//退出系统
			cout << "欢迎下次使用" << endl;
			//system("pause");
			return 0;
			break;
		}

		default:
			break;
		}
		//按任意键继续
		system("pause");
		//清屏
		system("cls");

	}
	
	return 0;
}
//显示菜单
void showMenu() {
	string mArray []= {
		"1、添加联系人",
		"2、显示联系人",
		"3、删除联系人",
		"4、查找联系人",
		"5、修改联系人",
		"6、清空联系人",
		"0、推出通讯录",
	};
	cout << "**************************" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "****  " << mArray[i] << "  *****" << endl;
	}
	cout << "**************************" << endl;
}
//添加联系人
void addCon(Addressbooks *abs){
	//通讯录已满不在添加
	if (abs->size == MAX)
	{
		cout << "通讯录已满，不能添加" << endl;
		return;
	}
	//姓名
	string pName;
	//性别
	int sex;
	//年龄
	int age;
	//电话
	string phone;
	//家庭地址
	string addr;
	cout << "请输入你的姓名：" << endl;
	cin >> pName;
	//输入正确值 1 ，2 才往下继续
	while (true)
	{
		cout << "请输入你的性别：" << endl;
		cout << "1：男" << endl;
		cout << "2：女" << endl;
		cin >> sex;
		if ((sex == 1) || (sex == 2))
		{
			break;
		}
	}
	cout << "请输入你的年龄：" << endl;
	cin >> age;
	cout << "请输入你的电话：" << endl;
	cin >> phone;
	cout << "请输入你的家庭地址：" << endl;
	cin >> addr;

	abs->pArray[abs->size].pName = pName;
	abs->pArray[abs->size].sex = sex;
	abs->pArray[abs->size].age = age;
	abs->pArray[abs->size].phone = phone;
	abs->pArray[abs->size].addr = addr;

	//更新通讯录中的人数
	abs->size++;

	cout << "添加成功" << endl;

	////按任意键继续
	//system("pause");
	////清屏
	//system("cls");

}
//显示联系人
void showCon(Addressbooks* abs) {
	if (abs->size<1)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		cout << "姓名\t性别\t年龄\t电话\t家庭地址" << endl;
		string sexArray[] = { "男","女" };
		for (int i = 0; i < abs->size; i++)
		{
			cout << abs->pArray[i].pName << "\t"
				<< sexArray[abs->pArray[i].sex - 1] << "\t"
				<< abs->pArray[i].age << "\t"
				<< abs->pArray[i].phone << "\t"
				<< abs->pArray[i].addr << "\t" << endl;
		}
	
	}
	////按任意键继续
	//system("pause");
	////清屏
	//system("cls");
	
}
//通讯录里是否有联系人，没有返回-1，有则返回数组中的位置
int isExistPerson(Addressbooks* book, string name) {
	int flag = -1;
	for (int i = 0; i < book->size; i++)
	{
		//找到联系人，保存下标
		if (book->pArray[i].pName == name) {
			flag = i;
			break;
		}
	}
	return flag;
}
//删除联系人
void deleCon(Addressbooks* book,int index) {
	//删除操作
	for (int j = index; j < book->size - 1; j++)
	{
		book->pArray[j] = book->pArray[j + 1];
	}
	book->size--;
	cout << "删除成功" << endl;

}
//编辑联系人
void editCon(Addressbooks* book) {
	//姓名
	string name;
	cout << "输入你要修改人的名字： ";
	cin >> name;
	

	int ret = isExistPerson(book, name);
	if (ret == -1)
	{
		cout << "查无此人，不能修改" << endl;
	}
	else
	{
		//新姓名
		string pName;
		//新性别
		int sex;
		//新年龄
		int age;
		//新电话
		string phone;
		//新家庭地址
		string addr;

		cout << "输入你要修改的新名字： ";
		cin >> pName;
		//输入正确值 1 ，2 才往下继续
		while (true)
		{
			cout << "请输入你的性别：" << endl;
			cout << "1：男" << endl;
			cout << "2：女" << endl;
			cin >> sex;
			if ((sex == 1) || (sex == 2))
			{
				break;
			}
		}
		cout << "请输入你的年龄：" << endl;
		cin >> age;
		cout << "请输入你的电话：" << endl;
		cin >> phone;
		cout << "请输入你的家庭地址：" << endl;
		cin >> addr;

		book->pArray[ret].pName = pName;
		book->pArray[ret].sex = sex;
		book->pArray[ret].age = age;
		book->pArray[ret].phone = phone;
		book->pArray[ret].addr = addr;

		cout << "修改成功" << endl;
	}
}
