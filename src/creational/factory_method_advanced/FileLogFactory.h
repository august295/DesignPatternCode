#ifndef __FILELOGFACTORY_H__
#define __FILELOGFACTORY_H__

#include "ILogFactory.hpp"
#include "FileLog.h"

class FileLogFactory : public ILogFactory
{
public:
	FileLogFactory();
	virtual ~FileLogFactory();

	virtual ILog * CreateLog() override;
};

#endif