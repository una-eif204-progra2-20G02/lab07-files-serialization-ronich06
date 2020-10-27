//
// Created by Pc on 27/10/2020.
//
#include "Person.h"
using System.Text.Json;
using System.Text.Json.Serialization;

int main(){
    Person person = new Person("402440766",21,"Rony");
    string miJson = JsonSerializer.Serialize(Cerveza);

    return 0;
}
