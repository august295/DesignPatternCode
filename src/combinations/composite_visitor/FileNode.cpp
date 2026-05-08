#include "FileNode.h"

#include "IFileSystemVisitor.hpp"

FileNode::FileNode(const std::string & name, std::size_t size)
    : name_(name), size_(size)
{
}

void FileNode::Accept(IFileSystemVisitor & visitor)
{
    visitor.VisitFile(*this);
}

std::string FileNode::Name() const
{
    return name_;
}

std::size_t FileNode::Size() const
{
    return size_;
}
