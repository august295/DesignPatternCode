#include "DirectoryNode.h"

#include "IFileSystemVisitor.hpp"

DirectoryNode::DirectoryNode(const std::string & name)
    : name_(name)
{
}

void DirectoryNode::Add(const std::shared_ptr<IFileSystemNode> & child)
{
    children_.push_back(child);
}

const std::vector<std::shared_ptr<IFileSystemNode>> & DirectoryNode::Children() const
{
    return children_;
}

void DirectoryNode::Accept(IFileSystemVisitor & visitor)
{
    visitor.VisitDirectory(*this);
}

std::string DirectoryNode::Name() const
{
    return name_;
}
