//
// Created by Pc on 23/10/2020.
//

#include "FileManager.h"
string FileManager::infoSaver(ISaveInfo * saveInfo,vector<Person> personList)
{
    return saveInfo->saveInfo(personList);
}