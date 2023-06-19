#include "library.h"
#include "book.h"
#include "author.h"
#include "patron.h"

// Constructor
Library::Library() {}

// Book management
void Library::addBook(const std::string& title, const std::string& authorName, const std::string& genre, int publicationYear) {
    // Find the author in the authors vector
    Author* author = nullptr;
    for (Author* a : authors) {
        if (a->getName() == authorName) {
            author = a;
            break;
        }
    }

    // Create a new author if not found
    if (author == nullptr) {
        author = new Author(authorName, "");
        authors.push_back(author);
    }

    // Create a new book and add it to the books vector
    Book* book = new Book(title, author, genre, publicationYear);
    books.push_back(book);
}

const std::vector<Book*>& Library::getAllBooks() const {
    return books;
}

// Author management
void Library::addAuthor(const std::string& name, const std::string& dateOfBirth) {
    Author* author = new Author(name, dateOfBirth);
    authors.push_back(author);
}

const std::vector<Author*>& Library::getAllAuthors() const {
    return authors;
}

// Patron management
void Library::addPatron(const std::string& name, const std::string& dateOfBirth) {
    Patron* patron = new Patron(name, dateOfBirth);
    patrons.push_back(patron);
}

const std::vector<Patron*>& Library::getAllPatrons() const {
    return patrons;
}
