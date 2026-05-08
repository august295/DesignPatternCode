#include "CommandManager.h"

#include "IEditorCommand.hpp"

#include <iostream>

void CommandManager::Execute(const std::shared_ptr<IEditorCommand> & command)
{
    if (command == nullptr)
    {
        return;
    }

    command->Execute();
    undoStack_.push(command);

    while (!redoStack_.empty())
    {
        redoStack_.pop();
    }

    std::cout << "Execute: " << command->Name() << std::endl;
}

void CommandManager::Undo()
{
    if (undoStack_.empty())
    {
        std::cout << "Undo: no command to undo" << std::endl;
        return;
    }

    std::shared_ptr<IEditorCommand> command = undoStack_.top();
    undoStack_.pop();
    command->Undo();
    redoStack_.push(command);

    std::cout << "Undo: " << command->Name() << std::endl;
}

void CommandManager::Redo()
{
    if (redoStack_.empty())
    {
        std::cout << "Redo: no command to redo" << std::endl;
        return;
    }

    std::shared_ptr<IEditorCommand> command = redoStack_.top();
    redoStack_.pop();
    command->Redo();
    undoStack_.push(command);

    std::cout << "Redo: " << command->Name() << std::endl;
}
