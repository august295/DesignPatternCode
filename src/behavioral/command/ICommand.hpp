#ifndef __ICOMMAND_HPP__
#define __ICOMMAND_HPP__

class ICommand
{
public:
    ICommand(){};
    virtual ~ICommand(){};

    /* 执行命令的虚函数 */
    virtual void Execute() = 0;
};

#endif