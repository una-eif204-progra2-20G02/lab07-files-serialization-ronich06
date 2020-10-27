//
// Created by Pc on 23/10/2020.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H
#include "iostream"
#include "ISaveInfo.h"
using namespace std;
class FileManager {
public:
    static string infoSaver(ISaveInfo*,vector<Person>);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
