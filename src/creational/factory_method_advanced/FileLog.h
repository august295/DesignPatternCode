#ifndef __FILELOG_H__
#define __FILELOG_H__

#include "ILog.hpp"

class FileLog : public ILog
{
public:
    FileLog();
    ~FileLog();

    virtual void WriteLog() override;
};

#endif