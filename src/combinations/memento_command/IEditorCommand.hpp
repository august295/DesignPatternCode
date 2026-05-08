#pragma once

#include <string>

class IEditorCommand
{
public:
    virtual ~IEditorCommand() = default;

    virtual void Execute() = 0;
    virtual void Undo() = 0;
    virtual void Redo() = 0;
    virtual std::string Name() const = 0;
};
