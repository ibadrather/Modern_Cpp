#include <iostream>
#include "book.h"
#include "author.h"
#include "patron.h"

int main_prev() {
    // Create an Author object
    Author author("John Doe", "1980-01-01");

    // Create a Book object
    Book book("The Great Book", &author, "Fiction", 2022);

    // Create a Patron object
    Patron patron("Jane Smith", "1995-05-10");

    // Access and display book information
    std::cout << "Title: " << book.getTitle() << std::endl;
    std::cout << "Author: " << book.getAuthor()->getName() << std::endl;
    std::cout << "Genre: " << book.getGenre() << std::endl;
    std::cout << "Publication Year: " << book.getPublicationYear() << std::endl;

    // Add the book to the author's collection
    author.addBook(&book);

    // Access and display author information
    std::cout << "Author: " << author.getName() << std::endl;
    std::cout << "Date of Birth: " << author.getDateOfBirth() << std::endl;
    std::cout << "Books Written: " << author.getBooks().size() << std::endl;

    // Patron borrows the book
    patron.addBorrowedBook(&book);
    std::cout << "Patron: " << patron.getName() << std::endl;
    std::cout << "Date of Birth: " << patron.getDateOfBirth() << std::endl;
    std::cout << "Borrowed Books: " << patron.getBorrowedBooks().size() << std::endl;

    // Patron returns the book
    patron.returnBook(&book);
    std::cout << "Borrowed Books: " << patron.getBorrowedBooks().size() << std::endl;

    return 0;
}
