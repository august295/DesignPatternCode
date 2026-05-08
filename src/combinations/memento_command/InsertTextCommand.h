#pragma once

#include "IEditorCommand.hpp"

#include <cstddef>
#include <memory>
#include <string>

class Editor;
class EditorMemento;

class InsertTextCommand : public IEditorCommand
{
public:
    InsertTextCommand(Editor & editor, std::size_t position, const std::string & text);

    void Execute() override;
    void Undo() override;
    void Redo() override;
    std::string Name() const override;

private:
    Editor & editor_;
    std::size_t position_;
    std::string text_;
    std::shared_ptr<EditorMemento> before_;
};
