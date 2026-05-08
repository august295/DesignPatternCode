#include "EditorMemento.h"

EditorMemento::EditorMemento(std::size_t position, const std::string & oldText, const std::string & newText)
    : position_(position), oldText_(oldText), newText_(newText)
{
}

std::size_t EditorMemento::GetPosition() const
{
    return position_;
}

const std::string & EditorMemento::GetOldText() const
{
    return oldText_;
}

const std::string & EditorMemento::GetNewText() const
{
    return newText_;
}
