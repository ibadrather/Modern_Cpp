#include "gtest/gtest.h"
#include "book.h"

// A test case for checking the creation of a Book object
TEST(BookTest, CreateBook) {
    Book b("The Great Gatsby", "F. Scott Fitzgerald", "Fiction", 1925);

    EXPECT_EQ(b.getTitle(), "The Great Gatsby");
    EXPECT_EQ(b.getAuthor(), "F. Scott Fitzgerald");
    EXPECT_EQ(b.getGenre(), "Fiction");
    EXPECT_EQ(b.getPublicationYear(), 1925);
    EXPECT_EQ(b.getStatus(), Status::AVAILABLE);
}

// A test case for checking the setStatus function
TEST(BookTest, SetStatus) {
    Book b("1984", "George Orwell", "Fiction", 1949);

    b.setStatus(Status::BORROWED);
    EXPECT_EQ(b.getStatus(), Status::BORROWED);
}
