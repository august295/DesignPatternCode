#ifndef __ADAPTEE_H__
#define __ADAPTEE_H__

#include <iostream>

/* 适配者：双端队列 */
class Adaptee
{
public:
    Adaptee();
   ~Adaptee();

   void SpecificRequest();
};

#endif