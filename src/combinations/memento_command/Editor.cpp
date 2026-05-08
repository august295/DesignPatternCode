#include "Editor.h"

#include "EditorMemento.h"

#include <algorithm>
#include <stdexcept>

Editor::Editor()
{
}

void Editor::Insert(std::size_t position, const std::string & text)
{
    ReplaceRange(position, 0, text);
}

void Editor::Erase(std::size_t position, std::size_t length)
{
    ReplaceRange(position, length, "");
}

std::shared_ptr<EditorMemento> Editor::CreateMemento(
    std::size_t position,
    std::size_t length,
    const std::string & newText) const
{
    return std::make_shared<EditorMemento>(
        position,
        GetText(position, length),
        newText);
}

void Editor::Restore(const std::shared_ptr<EditorMemento> & memento)
{
    if (memento == nullptr)
    {
        return;
    }

    ReplaceRange(
        memento->GetPosition(),
        memento->GetNewText().size(),
        memento->GetOldText());
}

void Editor::Apply(const std::shared_ptr<EditorMemento> & memento)
{
    if (memento == nullptr)
    {
        return;
    }

    ReplaceRange(
        memento->GetPosition(),
        memento->GetOldText().size(),
        memento->GetNewText());
}

void Editor::PrintState(const std::string & title) const
{
    std::cout << title << ": " << content_ << std::endl;
}

std::string Editor::GetText(std::size_t position, std::size_t length) const
{
    if (position > content_.size())
    {
        throw std::out_of_range("text position out of range");
    }

    return content_.substr(position, std::min(length, content_.size() - position));
}

void Editor::ReplaceRange(std::size_t position, std::size_t length, const std::string & text)
{
    if (position > content_.size())
    {
        throw std::out_of_range("replace position out of range");
    }

    content_.replace(position, std::min(length, content_.size() - position), text);
}
