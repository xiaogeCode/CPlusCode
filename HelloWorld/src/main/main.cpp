#include <iostream>
#include <model/Rectangele.h>
#include "model/Student.h"
#include "windows.h"
#include "dao/FileOpearation.h"
#include "dao/Utils.h"


#define File_Location "f:\\test.txt"
template <class T>T Max(T va1,T va2);
int main() {
 std::cout << "Hello, World!" << std::endl;

    Rectangele rectangele;
    cout<<rectangele.getArea()<<endl;

    WriteToFileByOftream(File_Location,"我是谁\nworl00d");

    string read = ReadFromFile(File_Location);
    cout<<UTF8ToGBK(read)<<endl;

    cout<<UTF8ToGBK("模板函数例子1 ")<<Max(1.2,3.4)<<endl;
    cout<<UTF8ToGBK("模板函数例子2 ")<<Max(8,4)<<endl;
    string gbk = UTF8ToGBK("模板函数");
    cout<<"gbk:"<<gbk<<" utf:"<<GBKToUTF8(gbk)<<"gbk: "<<UTF8ToGBK(GBKToUTF8(gbk))<<endl;

    Student *stu1 = new Student();
    stu1->setChinese(100);
    cout<<"  user: "<<'\t'<<stu1->getName()<<endl;
    cout<<"averge: "<<'\t'<<stu1->average()<<endl;
    MessageBoxA(NULL,"hello","caption",MB_OK);

    return 0;
}
template <class T>T Max(T va1,T va2){
    return va1>va2?va1:va2;
}