#pragma once

#include <string>
#include <vector>

// Forward declaring
class Book;

class Author {
private:
    std::string name;
    std::string dateOfBirth;
    std::vector<Book*> books;

public:
    // Constructor
    Author(const std::string& name, 
        const std::string& dateOfBirth);

    // Destructor
    ~Author();

    // Getters
    const std::string& getName() const;
    const std::string& getDateOfBirth() const;
    const std::vector<Book*>& getBooks() const;

    // Setter Method
    void addBook(Book* book);
};

