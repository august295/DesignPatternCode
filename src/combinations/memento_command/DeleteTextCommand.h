#pragma once

#include "IEditorCommand.hpp"

#include <cstddef>
#include <memory>
#include <string>

class Editor;
class EditorMemento;

class DeleteTextCommand : public IEditorCommand
{
public:
    DeleteTextCommand(Editor & editor, std::size_t position, std::size_t length);

    void Execute() override;
    void Undo() override;
    void Redo() override;
    std::string Name() const override;

private:
    Editor & editor_;
    std::size_t position_;
    std::size_t length_;
    std::shared_ptr<EditorMemento> before_;
};
