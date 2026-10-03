#include "User.h"
#include<iostream>
void User::borrowBook(Book& book)
{
    if (m_borrownum < m_maxnum) {
        if (book.getIsBorrowed()) {
            cout << "The book is borrowed." << endl;
            return;
        }
        else {
            m_borrownum++;
            book.setIsBorrowed(true);
        }
    }
}
void User::returnBook(Book& book)
{
    if (m_borrownum > 0) {
        m_borrownum--;
        book.setIsBorrowed(false);
    }
}
User::User(string name, string id, int age, int borrownum, int maxnum) {
    m_name = name;
    m_id = id;
    m_age = age;
    m_borrownum = borrownum;
    m_maxnum = maxnum;
}

string User::getName()
{
    return m_name;
}
string User::getId()
{
    return m_id;
}

int User::getBorrowNum()
{
    return m_borrownum;
}

int User::getMaxNum()
{
    return m_maxnum;
}

int User::getAge()
{
    return m_age;
}
void User::setName(string name)
{
    m_name = name;
}
void User::setId(string id)
{
    m_id = id;
}

void User::setAge(int age)
{
    m_age = age;
}

void User::setBorrowNum(int borrownum)
{
    m_borrownum = borrownum;
}
void User::setMaxNum(int maxnum)
{
    m_maxnum = maxnum;
}
void User::display()
{
    cout << "Name: " << m_name << endl;
    cout << "ID: " << m_id << endl;
    cout << "Borrowed books: " << m_borrownum << endl;
}