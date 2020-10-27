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
    string getId()const;
    int getAge()const;
    string getName()const;
    void setId(string);
    void setAge(int);
    void setName(string);
    string toString() const;
};


#endif //MY_PROJECT_NAME_PERSON_H
