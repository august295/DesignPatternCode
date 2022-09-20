#ifndef __ILOG_HPP__
#define __ILOG_HPP__

#include <iostream>

class ILog
{
public:
    ILog(){};
    virtual ~ILog(){};

    virtual void WriteLog() = 0;
};

#endif