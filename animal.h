#ifndef IANIMAL_H
#define IANIMAL_H

#include <iostream>
#include <string>

using namespace std;
class Animal{


    void set_name(string name);
    void set_color(string color);
    void set_total_legs(int n);
    void set_height(float height);


    void get_name(){return m_name;}
    void get_name(){return m_name;}
    void get_name(){return m_name;}


private:

    string m_name;
    string color;
    int total_legs;
};

#endif // IANIMAL_H
