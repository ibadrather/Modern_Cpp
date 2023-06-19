// This directive tells the preprocessor that this header file should only be included once
// during the compilation process, even if the `#include` directive is encountered multiple times.
#pragma once 

// Including the standard library string class. This will be used for the book's title, author, and genre.
#include <string>

// Forward declaring
class Author;

// This defines a new enumeration type named `Status`. The enumeration values are `AVAILABLE` and `BORROWED`.
// `enum class` creates a type-safe enumeration, i.e., you cannot implicitly convert `Status` to `int` or vice versa.
enum class Status {
    AVAILABLE,
    BORROWED
};

// This is the definition of the Book class.
class Book {
private:
    // These are the private member variables of the Book class.
    std::string title;
    Author* author;
    std::string genre;
    int publicationYear;
    Status status;

public:
    // This is the constructor of the Book class. It's a special member function that gets called when
    // an object of the class is created. The constructor initializes the member variables.
    Book(const std::string &title, 
        Author* author, 
        const std::string &genre, 
        int publicationYear);
    
    // This is the destructor of the Book class. It's a special member function that gets called when
    // an object of the class is destroyed. In this case, it doesn't need to do anything.
    ~Book();

    // Getter methods - these methods return the value of the private member variables.
    const std::string &getTitle() const;
    const Author* getAuthor() const;
    const std::string &getGenre() const;
    int getPublicationYear() const;
    Status getStatus() const;

    // Setter method - this method sets the value of the status member variable.
    void setStatus(Status status);
};
