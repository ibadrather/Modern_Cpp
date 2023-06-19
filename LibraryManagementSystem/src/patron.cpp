#include <algorithm>

#include "patron.h"
#include "book.h"

Patron::Patron(const std::string& name,
            const std::string& dateOfBirth
            ): name(name), dateOfBirth(dateOfBirth) {}

Patron::~Patron() = default;

// Getters
const std::string& Patron::getName() const {
    return name;
}

const std::string& Patron::getDateOfBirth() const {
    return dateOfBirth;
}

const std::vector<Book*>& Patron::getBorrowedBooks() const {
    return borrowedBooks;
}

// Setters
void Patron::addBorrowedBook(Book* book) {
    borrowedBooks.push_back(book);
}
void Patron::returnBook(Book* book){
    // Find the book in the borrowed books vector
    auto it = std::find(borrowedBooks.begin(), borrowedBooks.end(), book);

    // If the book is found, remove it from the borrowed books
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
    }
}