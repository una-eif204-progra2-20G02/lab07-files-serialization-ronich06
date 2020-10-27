//
// Created by Pc on 23/10/2020.
//
#include "sstream"
#include "Person2.h"
Person::Person()
{
    id = "";
    age = 0;
    name = "";
}
Person::Person(string id,int age,string name)
{
    this->id = id;
    this->age = age;
    this->name = name;
}
string Person::getId()
{
    return id;
}
int Person::getAge()
{
    return age;
}
string Person::getName()
{
    return name;
}
void Person::setId(string id)
{
    this->id = id;
}
void Person::setAge(int age)
{
    this->age = age;
}
void Person::setName(string name)
{
    this->name = name;
}
string Person::toString()
{
    stringstream output;
    output<<"Id:"<<getId()<<endl;
    output<<"Age:"<<getAge()<<endl;
    output<<"Name:"<<getName()<<endl;
    return output.str();
}