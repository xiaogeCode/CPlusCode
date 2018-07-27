//
// Created by xiaoge on 2018/7/23.
//

#ifndef HELLOWORLD_STUDENT_H
#define HELLOWORLD_STUDENT_H

#endif //HELLOWORLD_STUDENT_H

#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    Student();
    ~Student();
    int average();
    void printInfo();

    int getChinese() const;

    void setChinese(int chinese);

    int getMatch() const;

    void setMatch(int match);

    int getEnglish() const;

    void setEnglish(int english);

    const string &getName() const;

    void setName(const string &name);

private:
    string name;
    int chinese;
    int match;
    int english;
};