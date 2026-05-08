#include <iostream>
#include <memory>
#include <vector>

#include "DirectoryNode.h"
#include "FileNode.h"
#include "SearchVisitor.h"
#include "SizeVisitor.h"

/**
 * 1. 组合示例：组合 + 访问者
 *      使用组合模式表达文件系统树，使用访问者模式对节点执行不同操作。
 * 2. 典型场景
 *      文件系统遍历、AST 编译处理、UI 控件树导出。
 * 3. 职责划分
 *      DirectoryNode / FileNode: 表达树结构
 *      IFileSystemVisitor: 定义对节点的访问操作
 *      SizeVisitor: 统计文件数量、目录数量和总大小
 *      SearchVisitor: 根据关键字搜索文件
 */
int main()
{
    std::shared_ptr<DirectoryNode> root = std::make_shared<DirectoryNode>("root");
    std::shared_ptr<DirectoryNode> docs = std::make_shared<DirectoryNode>("docs");
    std::shared_ptr<DirectoryNode> images = std::make_shared<DirectoryNode>("images");

    docs->Add(std::make_shared<FileNode>("design-patterns.md", 120));
    docs->Add(std::make_shared<FileNode>("notes.txt", 45));

    images->Add(std::make_shared<FileNode>("diagram.png", 256));
    images->Add(std::make_shared<FileNode>("pattern-map.jpg", 512));

    root->Add(docs);
    root->Add(images);
    root->Add(std::make_shared<FileNode>("README.md", 32));

    SizeVisitor sizeVisitor;
    root->Accept(sizeVisitor);

    std::cout << "Directory count: " << sizeVisitor.DirectoryCount() << std::endl;
    std::cout << "File count: " << sizeVisitor.FileCount() << std::endl;
    std::cout << "Total size: " << sizeVisitor.TotalSize() << " KB" << std::endl;
    std::cout << std::endl;

    SearchVisitor searchVisitor("pattern");
    root->Accept(searchVisitor);

    const std::vector<std::string> & matches = searchVisitor.Matches();
    std::cout << "Search results:" << std::endl;
    for (std::size_t i = 0; i < matches.size(); ++i)
    {
        std::cout << matches[i] << std::endl;
    }

    return 0;
}
