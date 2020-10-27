//
// Created by Pc on 23/10/2020.
//

#ifndef MY_PROJECT_NAME_ISAVEINFO_H
#define MY_PROJECT_NAME_ISAVEINFO_H
#include "iostream"
#include "vector"
#include "Person.h"
using namespace std;
class ISaveInfo
{
public:
    virtual string saveInfo(vector<Person>) = 0;
};
#endif //MY_PROJECT_NAME_ISAVEINFO_H
