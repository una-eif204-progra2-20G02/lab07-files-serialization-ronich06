//
// Created by Pc on 27/10/2020.
//

#include <../lib/nlohmann/json.hpp>
#include "iostream"
#include "fstream"
#include "string"
#include "Person.h"
using namespace std;
using nlohmann::json;
void from_json(const json &_json, Person &_person) {
    _person.setId(_json.at("id").get<string>());
    _person.setAge(_json.at("age").get<int>());
    _person.setName(_json.at("name").get<std::string>());
}

vector<Person> deserialize(const string& _data) {
    json jsonData = json::parse(_data);
    vector<Person> personList = jsonData;

    return personList;
}
int main()
{
   vector<Person> personListFromJson;

   /* cout << "\n\nDeserialización del Json" << endl;
    personListFromJson = deserialize(R"([{"id":1,"name":"Mike"},{"id":2,"name":"Carlos"}])");
    for (const Person& person: personListFromJson) {
        std::cout << person.toString() << std::endl;
    }*/
    ifstream archivo1;
    string texto;
    try { archivo1.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();


    cout << "\n\nDeserialización del Json" << endl;
    personListFromJson = deserialize(R"([{"id":1,"name":"Mike"},{"id":2,"name":"Carlos"}])");
    for (const Person& person: personListFromJson) {
        std::cout << person.toString() << std::endl;
    }

    return 0;
}
