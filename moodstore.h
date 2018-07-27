#ifndef MOODSTORE_H
#define MOODSTORE_H
#include<unordered_map>
#include<vector>
#include "action.h"

class moodstore
{
public:
    moodstore();
    std::unordered_map<std::string, std::vector<Action*> > moodmap;
};

#endif // MOODSTORE_H
