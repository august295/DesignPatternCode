#pragma once

#include <memory>
#include <stack>

class IEditorCommand;

class CommandManager
{
public:
    void Execute(const std::shared_ptr<IEditorCommand> & command);
    void Undo();
    void Redo();

private:
    std::stack<std::shared_ptr<IEditorCommand>> undoStack_;
    std::stack<std::shared_ptr<IEditorCommand>> redoStack_;
};
