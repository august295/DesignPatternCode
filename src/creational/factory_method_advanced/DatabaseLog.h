#ifndef __DATABASELOG_H__
#define __DATABASELOG_H__

#include "ILog.hpp"

class DatabaseLog : public ILog
{
public:
    DatabaseLog();
    ~DatabaseLog();

    virtual void WriteLog() override;
};

#endif