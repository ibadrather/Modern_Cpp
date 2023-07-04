// Includes the Book.h header file.
#include "book.h"

// This is the definition of the constructor of the Book class.
// The constructor uses an initialization list to set the initial values of the
// member variables.
Book::Book(const std::string& title, Author* author, const std::string& genre,
           int publicationYear)
    : title(title),
      author(author),
      genre(genre),
      publicationYear(publicationYear),
      status(Status::AVAILABLE) {}

// This is the definition of the destructor of the Book class.
// `default` means that the compiler will generate a destructor with default
// behavior.
Book::~Book() = default;

// Definitions of the getter methods.
// `const` after the function name means that these methods do not modify the
// object's state. Definition of the getter methods
const std::string& Book::getTitle() const { return title; }

const Author* Book::getAuthor() const { return author; }

const std::string& Book::getGenre() const { return genre; }

int Book::getPublicationYear() const { return publicationYear; }

Status Book::getStatus() const { return status; }

// Definition of the setter method.
void Book::setStatus(Status status) {
    // `this->status` refers to the status member variable.
    // `status` refers to the parameter.
    // The assignment sets the member variable to the value of the parameter.
    this->status = status;
}
