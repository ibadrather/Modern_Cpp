#include <iostream>
#include "library.h"
#include "book.h"
#include "author.h"
#include "patron.h"

int main() {
    Library library;

    // Add authors
    library.addAuthor("John Doe", "1980-01-01");
    library.addAuthor("Jane Smith", "1975-05-12");

    // Add books
    library.addBook("The Great Book", "John Doe", "Fiction", 2022);
    library.addBook("Science Explained", "Jane Smith", "Science", 2019);
    library.addBook("Fantasy World", "John Doe", "Fantasy", 2021);

    // Add patrons
    library.addPatron("Alice Johnson", "1990-07-15");
    library.addPatron("Bob Wilson", "1985-12-30");

    // Retrieve and display all books
    const std::vector<Book*>& books = library.getAllBooks();
    std::cout << "All Books:\n";
    for (const Book* book : books) {
        std::cout << "Title: " << book->getTitle() << std::endl;
        std::cout << "Author: " << book->getAuthor()->getName() << std::endl;
        std::cout << "Genre: " << book->getGenre() << std::endl;
        std::cout << "Publication Year: " << book->getPublicationYear() << std::endl;
        std::cout << "-----------------------------\n";
    }

    // Retrieve and display all authors
    const std::vector<Author*>& authors = library.getAllAuthors();
    std::cout << "All Authors:\n";
    for (const Author* author : authors) {
        std::cout << "Author: " << author->getName() << std::endl;
        std::cout << "Date of Birth: " << author->getDateOfBirth() << std::endl;
        std::cout << "-----------------------------\n";
    }

    // Retrieve and display all patrons
    const std::vector<Patron*>& patrons = library.getAllPatrons();
    std::cout << "All Patrons:\n";
    for (const Patron* patron : patrons) {
        std::cout << "Patron: " << patron->getName() << std::endl;
        std::cout << "Date of Birth: " << patron->getDateOfBirth() << std::endl;
        std::cout << "-----------------------------\n";
    }

    // Example of borrowing books
    Patron* alice = patrons[0];
    Patron* bob = patrons[1];
    Book* book1 = books[0];
    Book* book2 = books[1];

    // Alice borrows book1
    alice->addBorrowedBook(book1);
    std::cout << alice->getName() << " has borrowed " << book1->getTitle() << std::endl;

    // Bob borrows book2
    bob->addBorrowedBook(book2);
    std::cout << bob->getName() << " has borrowed " << book2->getTitle() << std::endl;

    // Example of returning books
    alice->returnBook(book1);
    std::cout << alice->getName() << " has returned " << book1->getTitle() << std::endl;

    bob->returnBook(book2);
    std::cout << bob->getName() << " has returned " << book2->getTitle() << std::endl;

    // Example of adding new books for an author
    Author* johnDoe = authors[0];
    johnDoe->addBook("New Book 1", "Fantasy", 2023);
    johnDoe->addBook("New Book 2", "Mystery", 2024);

    std::cout << "Books written by " << johnDoe->getName() << ":\n";
    const std::vector<Book*>& johnDoeBooks = johnDoe->getBooks();
    for (const Book* book : johnDoeBooks) {
        std::cout << "Title: " << book->getTitle() << std::endl;
        std::cout << "Genre: " << book->getGenre() << std::endl;
        std::cout << "Publication Year: " << book->getPublicationYear() << std::endl;
        std::cout << "-----------------------------\n";
    }

    return 0;
}
