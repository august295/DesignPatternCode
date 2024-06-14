#ifndef __DATA_H__
#define __DATA_H__

#include <stdint.h>
#include <malloc.h>
#include <memory.h>

enum DataType
{
	ADD,
	SUB,
	MUL,
	DIV,
};

#pragma pack(1)
typedef struct DataCalc
{
	int a;
	int b;

	DataCalc(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
}DataCalc;

typedef struct DataContent
{
	uint32_t pub_type;   // 类型
	uint32_t pub_length; // 长度
	void* pub_content;   // 内容

	DataContent()
	{
		pub_type = UINT32_MAX;
		pub_length = UINT32_MAX;
		pub_content = nullptr;
	}

	DataContent(uint16_t type, char* content, uint32_t len)
	{
		pub_type = type;
		pub_length = len;
		pub_content = calloc(1, pub_length);
		memcpy(pub_content, content, len);
	}

	~DataContent() {}

	DataContent & operator=(const DataContent & dataContent)
	{
		pub_type = dataContent.pub_type;
		pub_length = dataContent.pub_length;
		pub_content = calloc(1, pub_length);
		memcpy(pub_content, dataContent.pub_content, pub_length);
		return *this;
	}

} DataContent;
#pragma pack()

#endif