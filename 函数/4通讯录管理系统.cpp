#include<iostream>
using namespace std;

//�������
#define MAX 1000		
//��ϵ�˽ṹ��
struct Person {
	//����
	string pName;	
	//�Ա�
	int sex;
	//����
	int age;
	//�绰
	string phone;
	//��ͥ��ַ
	string addr;
};
//ͨѶ¼�ṹ��
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
		case 1: {//�����ϵ��
			addCon(&book);
			break;
		}
		case 2: {//��ʾ
			showCon(&book);
			break;
		}
		case 3: {//ɾ��
			string delName;
			if (book.size < 1)
			{
				cout << "ͨѶ¼û����ϵ�ˣ�����ɾ��" << endl;

			}
			else
			{
				cout << "������Ҫɾ������ϵ�����ƣ�" << endl;
				cin >> delName;
				int ret = isExistPerson(&book, delName);
				if ( ret== -1)
				{
					cout << "��ϵ�˲�����" << endl;

					
				}
				else
				{
					deleCon(&book, ret);
				}

			}
			////�����������
			//system("pause");
			////����
			//system("cls");
			break;
		}
		case 4: {//����
			if (book.size < 1)
			{
				cout << "ͨѶ¼û����ϵ�ˣ����ܲ���" << endl;

			}
			else {
				cout << "������Ҫ�����˵����֣� ";
				string name;
				cin >> name;
				int ret = isExistPerson(&book, name);
				if (ret == -1)
				{
					cout << "���޴���" << endl;
				}
				else {
					cout << "����\t�Ա�\t����\t�绰\t��ͥ��ַ" << endl;
					string sexArray[] = { "��","Ů" };
					cout << book.pArray[ret].pName << "\t"
						<< (book.pArray[ret].sex==1?"��":"Ů")<< "\t"
						<< book.pArray[ret].age << "\t"
						<< book.pArray[ret].phone << "\t"
						<< book.pArray[ret].addr << "\t" << endl;
				}
			}
			////�����������
			//system("pause");
			////����
			//system("cls");

			break;
		}
		case 5: {//�޸�
			if (book.size < 1)
			{
				cout << "ͨѶ¼û����ϵ�ˣ������޸�" << endl;

			}
			else {
				editCon(&book);

			}
			break;
		}
		case 6: {//���
			if (book.size < 1)
			{
				cout << "ͨѶ¼û����ϵ�ˣ�����Ҫ���" << endl;

			}
			else
			{
				book.size = 0;
				cout << "ͨѶ¼�����" << endl;
			}
			break;
		}
		case 0: {//�˳�ϵͳ
			cout << "��ӭ�´�ʹ��" << endl;
			//system("pause");
			return 0;
			break;
		}

		default:
			break;
		}
		//�����������
		system("pause");
		//����
		system("cls");

	}
	
	return 0;
}
//��ʾ�˵�
void showMenu() {
	string mArray []= {
		"1�������ϵ��",
		"2����ʾ��ϵ��",
		"3��ɾ����ϵ��",
		"4��������ϵ��",
		"5���޸���ϵ��",
		"6�������ϵ��",
		"0���Ƴ�ͨѶ¼",
	};
	cout << "**************************" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "****  " << mArray[i] << "  *****" << endl;
	}
	cout << "**************************" << endl;
}
//�����ϵ��
void addCon(Addressbooks *abs){
	//ͨѶ¼�����������
	if (abs->size == MAX)
	{
		cout << "ͨѶ¼�������������" << endl;
		return;
	}
	//����
	string pName;
	//�Ա�
	int sex;
	//����
	int age;
	//�绰
	string phone;
	//��ͥ��ַ
	string addr;
	cout << "���������������" << endl;
	cin >> pName;
	//������ȷֵ 1 ��2 �����¼���
	while (true)
	{
		cout << "����������Ա�" << endl;
		cout << "1����" << endl;
		cout << "2��Ů" << endl;
		cin >> sex;
		if ((sex == 1) || (sex == 2))
		{
			break;
		}
	}
	cout << "������������䣺" << endl;
	cin >> age;
	cout << "��������ĵ绰��" << endl;
	cin >> phone;
	cout << "��������ļ�ͥ��ַ��" << endl;
	cin >> addr;

	abs->pArray[abs->size].pName = pName;
	abs->pArray[abs->size].sex = sex;
	abs->pArray[abs->size].age = age;
	abs->pArray[abs->size].phone = phone;
	abs->pArray[abs->size].addr = addr;

	//����ͨѶ¼�е�����
	abs->size++;

	cout << "��ӳɹ�" << endl;

	////�����������
	//system("pause");
	////����
	//system("cls");

}
//��ʾ��ϵ��
void showCon(Addressbooks* abs) {
	if (abs->size<1)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		cout << "����\t�Ա�\t����\t�绰\t��ͥ��ַ" << endl;
		string sexArray[] = { "��","Ů" };
		for (int i = 0; i < abs->size; i++)
		{
			cout << abs->pArray[i].pName << "\t"
				<< sexArray[abs->pArray[i].sex - 1] << "\t"
				<< abs->pArray[i].age << "\t"
				<< abs->pArray[i].phone << "\t"
				<< abs->pArray[i].addr << "\t" << endl;
		}
	
	}
	////�����������
	//system("pause");
	////����
	//system("cls");
	
}
//ͨѶ¼���Ƿ�����ϵ�ˣ�û�з���-1�����򷵻������е�λ��
int isExistPerson(Addressbooks* book, string name) {
	int flag = -1;
	for (int i = 0; i < book->size; i++)
	{
		//�ҵ���ϵ�ˣ������±�
		if (book->pArray[i].pName == name) {
			flag = i;
			break;
		}
	}
	return flag;
}
//ɾ����ϵ��
void deleCon(Addressbooks* book,int index) {
	//ɾ������
	for (int j = index; j < book->size - 1; j++)
	{
		book->pArray[j] = book->pArray[j + 1];
	}
	book->size--;
	cout << "ɾ���ɹ�" << endl;

}
//�༭��ϵ��
void editCon(Addressbooks* book) {
	//����
	string name;
	cout << "������Ҫ�޸��˵����֣� ";
	cin >> name;
	

	int ret = isExistPerson(book, name);
	if (ret == -1)
	{
		cout << "���޴��ˣ������޸�" << endl;
	}
	else
	{
		//������
		string pName;
		//���Ա�
		int sex;
		//������
		int age;
		//�µ绰
		string phone;
		//�¼�ͥ��ַ
		string addr;

		cout << "������Ҫ�޸ĵ������֣� ";
		cin >> pName;
		//������ȷֵ 1 ��2 �����¼���
		while (true)
		{
			cout << "����������Ա�" << endl;
			cout << "1����" << endl;
			cout << "2��Ů" << endl;
			cin >> sex;
			if ((sex == 1) || (sex == 2))
			{
				break;
			}
		}
		cout << "������������䣺" << endl;
		cin >> age;
		cout << "��������ĵ绰��" << endl;
		cin >> phone;
		cout << "��������ļ�ͥ��ַ��" << endl;
		cin >> addr;

		book->pArray[ret].pName = pName;
		book->pArray[ret].sex = sex;
		book->pArray[ret].age = age;
		book->pArray[ret].phone = phone;
		book->pArray[ret].addr = addr;

		cout << "�޸ĳɹ�" << endl;
	}
}
