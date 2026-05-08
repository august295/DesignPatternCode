#pragma once

#include "IFileSystemNode.hpp"

#include <memory>
#include <string>
#include <vector>

class DirectoryNode : public IFileSystemNode
{
public:
    explicit DirectoryNode(const std::string & name);

    void Add(const std::shared_ptr<IFileSystemNode> & child);
    const std::vector<std::shared_ptr<IFileSystemNode>> & Children() const;

    void Accept(IFileSystemVisitor & visitor) override;
    std::string Name() const override;

private:
    std::string name_;
    std::vector<std::shared_ptr<IFileSystemNode>> children_;
};
