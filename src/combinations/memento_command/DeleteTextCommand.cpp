#include "DeleteTextCommand.h"

#include "Editor.h"

DeleteTextCommand::DeleteTextCommand(Editor & editor, std::size_t position, std::size_t length)
    : editor_(editor), position_(position), length_(length)
{
}

void DeleteTextCommand::Execute()
{
    before_ = editor_.CreateMemento(position_, length_, "");
    editor_.Apply(before_);
}

void DeleteTextCommand::Undo()
{
    editor_.Restore(before_);
}

void DeleteTextCommand::Redo()
{
    editor_.Apply(before_);
}

std::string DeleteTextCommand::Name() const
{
    return "DeleteTextCommand";
}
