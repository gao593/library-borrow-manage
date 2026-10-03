#pragma once
#include <vector>
#include "Book.h"
#include "User.h"

class Library
{
private:
    std::vector<Book> bookList;
public:
    void addBook(const Book& book);
    void showAllBooks() const;
    Book* findBookById(const string& bookId);
    bool lendBook(User& user, const string& bookId);
    bool takeBackBook(User& user, const string& bookId);
};
