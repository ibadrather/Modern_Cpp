#include <iostream>

#include "author.h"
#include "book.h"
#include "library.h"
#include "patron.h"

int main() {
    // Creating authors
    Author author1("J.K. Rowling", "31-07-1965");
    Author author2("George R.R. Martin", "20-09-1948");

    // Creating books
    Book book1("Harry Potter and the Philosopher's Stone", &author1, "Fantasy",
               1997);
    Book book2("A Game of Thrones", &author2, "Fantasy", 1996);

    // Add books to authors
    author1.addBook(&book1);
    author2.addBook(&book2);

    // Creating library
    Library library;

    // Adding authors to library
    library.addAuthor(author1.getName(), author1.getDateOfBirth());
    library.addAuthor(author2.getName(), author2.getDateOfBirth());

    // Adding books to library
    library.addBook(book1.getTitle(), author1.getName(), book1.getGenre(),
                    book1.getPublicationYear());
    library.addBook(book2.getTitle(), author2.getName(), book2.getGenre(),
                    book2.getPublicationYear());

    // Creating patrons
    Patron patron1("John Doe", "01-01-1990");
    Patron patron2("Jane Doe", "01-01-1992");

    // Adding patrons to library
    library.addPatron(patron1.getName(), patron1.getDateOfBirth());
    library.addPatron(patron2.getName(), patron2.getDateOfBirth());

    // Borrowing book
    patron1.addBorrowedBook(&book1);
    book1.setStatus(Status::BORROWED);

    // Printing details
    std::cout << "Author1 books count: " << author1.getBooks().size()
              << std::endl;
    std::cout << "Author2 books count: " << author2.getBooks().size()
              << std::endl;
    std::cout << "Library books count: " << library.getAllBooks().size()
              << std::endl;
    std::cout << "Library authors count: " << library.getAllAuthors().size()
              << std::endl;
    std::cout << "Library patrons count: " << library.getAllPatrons().size()
              << std::endl;
    std::cout << "Patron1 borrowed books count: "
              << patron1.getBorrowedBooks().size() << std::endl;

    return 0;
}
