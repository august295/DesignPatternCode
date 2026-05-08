#include "SizeVisitor.h"

#include "DirectoryNode.h"
#include "FileNode.h"

SizeVisitor::SizeVisitor()
    : totalSize_(0), fileCount_(0), directoryCount_(0)
{
}

void SizeVisitor::VisitDirectory(DirectoryNode & directory)
{
    ++directoryCount_;

    const std::vector<std::shared_ptr<IFileSystemNode>> & children = directory.Children();
    for (std::size_t i = 0; i < children.size(); ++i)
    {
        children[i]->Accept(*this);
    }
}

void SizeVisitor::VisitFile(FileNode & file)
{
    ++fileCount_;
    totalSize_ += file.Size();
}

std::size_t SizeVisitor::TotalSize() const
{
    return totalSize_;
}

std::size_t SizeVisitor::FileCount() const
{
    return fileCount_;
}

std::size_t SizeVisitor::DirectoryCount() const
{
    return directoryCount_;
}
