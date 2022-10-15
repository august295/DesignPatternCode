#ifndef __COMMON_H__
#define __COMMON_H__

#include <cstdint>
#include <cstring>

enum DataType
{
    GAME    = 0, // 游戏
    FICTION = 1, // 小说
    COMIC   = 2, // 动漫
};

#pragma pack(1)
// 数据包
typedef struct DataHeader
{
    uint32_t pub_type;   // 类型
    uint32_t pub_length; // 长度
} DataHeader;

// 详细数据包
typedef struct DataContent : DataHeader
{
    void* pub_content; // 内容

    DataContent()
    {
        pub_type   = INT32_MAX;
        pub_length = INT32_MAX;
		pub_content = nullptr;
    }

    DataContent(uint32_t type, std::string content)
    {
		uint32_t len = (uint32_t)content.size() + 1;
        pub_type   = type;
        pub_length = sizeof(DataHeader) + len;
		pub_content = malloc(len);
        memcpy(pub_content, content.c_str(), len);
    }

    ~DataContent() 
	{
		free(pub_content);
		pub_content = nullptr;
	}

    DataContent & operator=(const DataContent & dataContent)
    {
        pub_type   = dataContent.pub_type;
        pub_length = dataContent.pub_length;
        memcpy(pub_content, dataContent.pub_content, pub_length - sizeof(DataHeader));
        return *this;
    }

} DataContent;
#pragma pack()

#endif