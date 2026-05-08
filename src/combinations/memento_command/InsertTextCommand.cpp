#include "InsertTextCommand.h"

#include "Editor.h"

InsertTextCommand::InsertTextCommand(Editor & editor, std::size_t position, const std::string & text)
    : editor_(editor), position_(position), text_(text)
{
}

void InsertTextCommand::Execute()
{
    before_ = editor_.CreateMemento(position_, 0, text_);
    editor_.Apply(before_);
}

void InsertTextCommand::Undo()
{
    editor_.Restore(before_);
}

void InsertTextCommand::Redo()
{
    editor_.Apply(before_);
}

std::string InsertTextCommand::Name() const
{
    return "InsertTextCommand";
}
