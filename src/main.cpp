//
// Created by Pc on 27/10/2020.
//
#include "Person.h"
#include <../lib/nlohmann/json.hpp>
#include "FileManager.h"
#include "utility"
#include "InformationSerializer.h"
#include "fstream"
#include "iostream"
#include "string"
using namespace std;
int main(){
    vector<Person> personList;
    Person person1 =  Person("402440766",21,"Rony");
    Person person2 =  Person("402440766",21,"Rony");
    Person person3 =  Person("402440766",21,"Rony");

    personList.push_back(person1);
    personList.push_back(person2);
    personList.push_back(person3);
    ISaveInfo* serialize = new InformationSerializer();

    cout<<"Serialization:"<<endl;
    cout<<FileManager::infoSaver(serialize,personList)<<endl<<endl;

    ofstream archivo ;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    archivo << serialize->saveInfo(personList) << '\n';
    archivo.close();



    return 0;
}
