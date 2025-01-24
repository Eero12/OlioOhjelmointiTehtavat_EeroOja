#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string pw, int w, int f);
private:
    int makepizza();
    string password = "pizza";
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
