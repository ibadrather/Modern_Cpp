#pragma once

#include <string>
#include <vector>

class Book;

class Patron {
private:
    std::string name;
    std::string dateOfBirth;
    std::vector<Book*> borrowedBooks;

public:
    Patron(const std::string& name,
        const std::string& dateOfBirth);
    
    ~Patron();

    // Getters
    const std::string& getName() const;
    const std::string& getDateOfBirth() const;
    const std::vector<Book*>& getBorrowedBooks() const;

    // Setter Method
    void addBorrowedBook(Book* book);
    void returnBook(Book* book);


};