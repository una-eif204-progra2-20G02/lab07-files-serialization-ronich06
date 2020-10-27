//
// Created by Pc on 23/10/2020.
//

#include "InformationSerializer.h"
void to_json(json &_json, Person _person) {
    _json = json{
            {"id",  _person.getId()},
            {"age",  _person.getAge()},
            {"name", _person.getName()},
    };
}
void from_json(const json &_json, Person &_person) {
    _person.setId(_json.at("id").get<string>());
    _person.setAge(_json.at("age").get<int>());
    _person.setName(_json.at("name").get<std::string>());
}
string InformationSerializer::saveInfo( vector<Person> _personList) {
    json jsonData(_personList);
    string jsonArray = jsonData.dump();
    return jsonArray;
}

