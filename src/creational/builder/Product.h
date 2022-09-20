#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include <iostream>
#include <string>

class Product
{
public:
    Product();
    ~Product();

    void SetA(std::string a);
    void SetB(std::string b);
    void SetC(std::string c);
    void Show();

private:
    std::string PriA;
    std::string PriB;
    std::string PriC;
};

#endif