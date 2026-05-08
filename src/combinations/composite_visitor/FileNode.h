#pragma once

#include "IFileSystemNode.hpp"

#include <cstddef>
#include <string>

class FileNode : public IFileSystemNode
{
public:
    FileNode(const std::string & name, std::size_t size);

    void Accept(IFileSystemVisitor & visitor) override;
    std::string Name() const override;
    std::size_t Size() const;

private:
    std::string name_;
    std::size_t size_;
};
