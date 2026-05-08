#pragma once

#include "IFileSystemVisitor.hpp"

#include <cstddef>

class SizeVisitor : public IFileSystemVisitor
{
public:
    SizeVisitor();

    void VisitDirectory(DirectoryNode & directory) override;
    void VisitFile(FileNode & file) override;

    std::size_t TotalSize() const;
    std::size_t FileCount() const;
    std::size_t DirectoryCount() const;

private:
    std::size_t totalSize_;
    std::size_t fileCount_;
    std::size_t directoryCount_;
};
