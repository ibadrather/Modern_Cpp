#include "author.h"
#include "book.h"

Author::Author(const std::string& name, 
            const std::string& dateOfBirth
        ): name(name), dateOfBirth(dateOfBirth) {}


Author::~Author() = default;

// Getters
const std::string& Author::getName() const {
    return name;
}

const std::string& Author::getDateOfBirth() const {
    return dateOfBirth;
}

const std::vector<Book*>& Author::getBooks() const {
    return books;
}

// Setter Method
void Author::addBook(Book* book) {
    books.push_back(book);
}