//
// Created by xiaoge on 2018/7/23.
//

#include "model/Student.h"

Student::Student() {
    name = "uu0";
    match = 27;
    english = 36;
    chinese = 85;
}
Student::~Student() {

}

int Student::getChinese() const {
    return chinese;
}

void Student::setChinese(int chinese) {
    Student::chinese = chinese;
}

int Student::getMatch() const {
    return match;
}

void Student::setMatch(int match) {
    Student::match = match;
}

int Student::getEnglish() const {
    return english;
}

void Student::setEnglish(int english) {
    Student::english = english;
}

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}
int Student::average() {
    return (this->chinese+this->english+this->match)/3;
}

