#pragma once

#include <cstddef>
#include <string>

class EditorMemento
{
public:
    EditorMemento(std::size_t position, const std::string & oldText, const std::string & newText);

    std::size_t GetPosition() const;
    const std::string & GetOldText() const;
    const std::string & GetNewText() const;

private:
    std::size_t position_;
    std::string oldText_;
    std::string newText_;
};
