#ifndef ACTION_H
#define ACTION_H
#include <string>

class Action
{
public:
    Action();
    virtual void getaction() = 0;
    //virtual ~Action();
};


class website : public Action
{
    website(std::string url_)
        : url(url_)
    {}

    void getaction();
    std::string url;
};

class text : public Action
{
    void getaction();
};

class other : public Action
{
    void getaction();
};

class todolist : public Action
{
    void getaction();
};

class meditate : public Action
{
    void getaction();
};

class deepbreaths : public Action
{
    void getaction();
};

#endif // ACTION_H
