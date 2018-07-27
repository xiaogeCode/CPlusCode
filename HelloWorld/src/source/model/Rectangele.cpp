//
// Created by xiaoge on 2018/7/24.
//

#include "model/Rectangele.h"

int Rectangele::getArea() {
    return length*width;
}

Rectangele::Rectangele() {
    length = 10;
    width = 50;
}
