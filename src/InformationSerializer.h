//
// Created by Pc on 23/10/2020.
//

#ifndef MY_PROJECT_NAME_INFORMATIONSERIALIZER_H
#define MY_PROJECT_NAME_INFORMATIONSERIALIZER_H
#include <../lib/nlohmann/json.hpp>
#include "ISaveInfo.h"
using namespace std;
using nlohmann::json;
class InformationSerializer : public ISaveInfo {
public:
    string saveInfo(vector<Person>) override;

};


#endif //MY_PROJECT_NAME_INFORMATIONSERIALIZER_H
