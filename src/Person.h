//
// Created by Pc on 23/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H
#include <iostream>
using namespace std;

class Person {
private:
    string id;
    int age;
    string name;
public:
    Person();
    Person(string,int,string);
    string getId();
    int getAge();
    string getName();
    void getId(string);
    void getAge(int);
    void getName(string);
    string toString();
};


#endif //MY_PROJECT_NAME_PERSON_H
