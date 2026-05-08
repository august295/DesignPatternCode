#pragma once

class DirectoryNode;
class FileNode;

class IFileSystemVisitor
{
public:
    virtual ~IFileSystemVisitor() = default;

    virtual void VisitDirectory(DirectoryNode & directory) = 0;
    virtual void VisitFile(FileNode & file) = 0;
};
