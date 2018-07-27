//
// Created by xiaoge on 2018/7/25.
//

#ifndef HELLOWORLD_FILEOPEARATION_H
#define HELLOWORLD_FILEOPEARATION_H

#endif //HELLOWORLD_FILEOPEARATION_H
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

string ReadFromFile(string fileName);
void WriteToFile(string fileName,string data);
string ReadFromFileByIfstream(string fileName);
void WriteToFileByOftream(string fileName,string data);