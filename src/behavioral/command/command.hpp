#ifndef __COMMAND_HPP__
#define __COMMAND_HPP__

class command
{
public:
    command(){};
    virtual ~command(){};

    /* 执行命令的虚函数 */
    virtual void execute() = 0;
};

#endif