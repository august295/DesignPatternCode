#include <iostream>
#include <memory>

#include "CommandManager.h"
#include "DeleteTextCommand.h"
#include "Editor.h"
#include "InsertTextCommand.h"

/**
 * 1. 组合示例：备忘录 + 命令
 *      使用命令模式封装编辑操作，使用备忘录模式保存变更区间。
 * 2. 典型场景
 *      编辑器 / IDE 撤销重做、游戏回退上一步、事务回滚。
 * 3. 职责划分
 *      CommandManager: 负责执行、撤销、重做流程
 *      IEditorCommand: 封装具体编辑动作
 *      EditorMemento: 保存一次变更的位置、旧文本、新文本
 *      Editor: 原发器，负责创建和恢复快照
 */
int main()
{
    Editor editor;
    CommandManager manager;

    editor.PrintState("Initial");

    manager.Execute(std::make_shared<InsertTextCommand>(editor, 0, "Hello"));
    editor.PrintState("After step 1");

    manager.Execute(std::make_shared<InsertTextCommand>(editor, 5, ", Design Patterns"));
    editor.PrintState("After step 2");

    manager.Execute(std::make_shared<DeleteTextCommand>(editor, 5, 2));
    editor.PrintState("After step 3");

    std::cout << std::endl;

    manager.Undo();
    editor.PrintState("After undo 1");

    manager.Undo();
    editor.PrintState("After undo 2");

    manager.Redo();
    editor.PrintState("After redo 1");

    return 0;
}
