//
// Created by xiaoge on 2018/7/25.
//

#include "dao/FileOpearation.h"

/**
 * 功能描述: <br>
 * 〈fstream读取文件〉
   参数@param :
 * 返回@return:
 * 作者@Author:xiaoge
 * 时间@Date  : 2018/7/25 20:37
 */
string ReadFromFile(string fileName) {
    fstream f(fileName,ios::in);
    if (f.fail()) {
        cout<<"can't open file "<<fileName<<endl;
        return NULL;
    }
    string str;
    while (!f.eof()) {
        string tmp = str;
        //f>>str;
        getline(f,str);
        str = tmp + "\n"+ str;
    }
    return str;
}
/**
 * 功能描述: <br>
 * 〈fstream写入文件〉
   参数@param :
 * 返回@return:
 * 作者@Author:xiaoge
 * 时间@Date  : 2018/7/25 20:36
 */
void WriteToFile(string fileName,string data) {
    fstream f(fileName,ios::out);
    if (f.fail()) {
        cout<<"can't open file "<<fileName<<endl;
        return;
    }
    f<<data;
    f.close();
}
/**
 * 功能描述: <br>
 * 〈ifstream读取文件〉
   参数@param :
 * 返回@return:
 * 作者@Author:xiaoge
 * 时间@Date  : 2018/7/25 21:50
 */
string ReadFromFileByIfstream(string fileName) {
    string str;
    ifstream ifile(fileName,ios::in);
    if (!ifile) {
        cout<<"can't open file "<<fileName<<endl;
        throw runtime_error("can't open file ");
        return NULL;
    } else{
        while (!ifile.eof()) {
            string tmp = str;
            getline(ifile,str);
            str = tmp +"\n"+ str;
        }
    }
    ifile.close();
    return str;
}
/**
 * 功能描述: <br>
 * 〈ofstream写入文件〉
   参数@param :
 * 返回@return:
 * 作者@Author:xiaoge
 * 时间@Date  : 2018/7/25 21:50
 */
void WriteToFileByOftream(string fileName, string data) {
    ofstream ofile(fileName,ios::out);
    if (!ofile) {
        throw runtime_error("can't open file ");
        return;
    }else{
        ofile<<data<<endl;
    }

    ofile.close();
}
