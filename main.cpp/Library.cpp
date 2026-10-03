#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book)
{
    bookList.push_back(book);
}

void Library::showAllBooks() const
{
    std::cout << "========== Library Book List ==========" << std::endl;
    for (const auto& b : bookList)
    {
        b.display();
        std::cout << "----------------------------------------" << std::endl;
    }
}

Book* Library::findBookById(const string& bookId)
{
    for (auto& b : bookList)
    {
        if (b.getId() == bookId)
        {
            return &b;
        }
    }
    return nullptr;
}

bool Library::lendBook(User& user, const string& bookId)
{
    Book* targetBook = findBookById(bookId);
    if (targetBook == nullptr)
    {
        std::cout << "The book is not found in library." << std::endl;
        return false;
    }
    user.borrowBook(*targetBook);
    return true;
}

bool Library::takeBackBook(User& user, const string& bookId)
{
    Book* targetBook = findBookById(bookId);
    if (targetBook == nullptr)
    {
        std::cout << "The book is not found in library." << std::endl;
        return false;
    }
    user.returnBook(*targetBook);
    return true;
}
