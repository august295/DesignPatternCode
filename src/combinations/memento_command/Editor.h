#pragma once

#include <cstddef>
#include <iostream>
#include <memory>
#include <string>

class EditorMemento;

class Editor
{
public:
    Editor();

    void Insert(std::size_t position, const std::string & text);
    void Erase(std::size_t position, std::size_t length);

    std::shared_ptr<EditorMemento> CreateMemento(
        std::size_t position,
        std::size_t length,
        const std::string & newText) const;
    void Restore(const std::shared_ptr<EditorMemento> & memento);
    void Apply(const std::shared_ptr<EditorMemento> & memento);

    void PrintState(const std::string & title) const;

private:
    std::string GetText(std::size_t position, std::size_t length) const;
    void ReplaceRange(std::size_t position, std::size_t length, const std::string & text);

    std::string content_;
};
