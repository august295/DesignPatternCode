#pragma once

#include <memory>
#include <string>

class IFileSystemVisitor;

class IFileSystemNode
{
public:
    virtual ~IFileSystemNode() = default;

    virtual void Accept(IFileSystemVisitor & visitor) = 0;
    virtual std::string Name() const = 0;
};
