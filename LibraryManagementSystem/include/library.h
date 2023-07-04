#pragma once

#include <string>
#include <vector>
#include <fstream> // for std::ifstream
#include <sstream> // for std::stringstream

class Book;
class Author;
class Patron;

class Library {
private:
    std::vector<Book*> books;
    std::vector<Author*> authors;
    std::vector<Patron*> patrons;

public:
    // Constructor
    Library();

    // Book management
    void addBook(const std::string& title, const std::string& authorName, const std::string& genre, int publicationYear);
    const std::vector<Book*>& getAllBooks() const;

    // Author management
    void addAuthor(const std::string& name, const std::string& dateOfBirth);
    const std::vector<Author*>& getAllAuthors() const;

    // Patron management
    void addPatron(const std::string& name, const std::string& dateOfBirth);
    const std::vector<Patron*>& getAllPatrons() const;

    // Load Data
    void loadAuthors(const std::string& filename);
    void loadBooks(const std::string& filename);
    void loadPatrons(const std::string& filename);
};
