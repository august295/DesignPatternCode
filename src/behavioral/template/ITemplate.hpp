#ifndef __ITEMPLATE_HPP__
#define __ITEMPLATE_HPP__

#include <iostream>
#include <string>

class ITemplate
{
public:
    ITemplate(){};
    virtual ~ITemplate(){};

	void OpenFile(const std::string& filePath)
	{
		std::cout << "Open [" << filePath << "] and load data.\n";
	}
	virtual void ParseData() = 0;
	void CloseFile(const std::string& filePath)
	{
		std::cout << "Close [" << filePath << "].\n";
	}

	void Mine(const std::string& filePath)
	{
		OpenFile(filePath);
		ParseData();
		CloseFile(filePath);
	}
};

#endif