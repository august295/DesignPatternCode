#include "SearchVisitor.h"

#include "DirectoryNode.h"
#include "FileNode.h"

SearchVisitor::SearchVisitor(const std::string & keyword)
    : keyword_(keyword)
{
}

void SearchVisitor::VisitDirectory(DirectoryNode & directory)
{
    pathStack_.push_back(directory.Name());

    const std::vector<std::shared_ptr<IFileSystemNode>> & children = directory.Children();
    for (std::size_t i = 0; i < children.size(); ++i)
    {
        children[i]->Accept(*this);
    }

    pathStack_.pop_back();
}

void SearchVisitor::VisitFile(FileNode & file)
{
    if (file.Name().find(keyword_) == std::string::npos)
    {
        return;
    }

    std::string fullPath;
    for (std::size_t i = 0; i < pathStack_.size(); ++i)
    {
        fullPath += pathStack_[i] + "/";
    }
    fullPath += file.Name();

    matches_.push_back(fullPath);
}

const std::vector<std::string> & SearchVisitor::Matches() const
{
    return matches_;
}
