//
// Created by Pc on 27/10/2020.
//
#include "Person.h"
#include "FileManager.h"
#include "utility"
#include "InformationSerializer.h"

int main(){
    vector<Person> personList;
    Person person1 =  Person("402440766",21,"Rony");
    Person person2 =  Person("402440766",21,"Rony");

    personList.push_back(person1);
    personList.push_back(person2);
    ISaveInfo* serialize = new InformationSerializer();

    cout<<FileManager::infoSaver(serialize,personList);


    return 0;
}
