#pragma once

#include "IFileSystemVisitor.hpp"

#include <string>
#include <vector>

class SearchVisitor : public IFileSystemVisitor
{
public:
    explicit SearchVisitor(const std::string & keyword);

    void VisitDirectory(DirectoryNode & directory) override;
    void VisitFile(FileNode & file) override;

    const std::vector<std::string> & Matches() const;

private:
    std::string keyword_;
    std::vector<std::string> pathStack_;
    std::vector<std::string> matches_;
};
