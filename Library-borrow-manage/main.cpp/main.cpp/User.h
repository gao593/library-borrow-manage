#pragma once
#include<string>
#include "Book.h"
using namespace std;
class User
{
private:
    string m_name;
    string m_id;
    int m_age;
    int m_borrownum;
    int m_maxnum;
public:
    User();
    User(string name, string id, int age, int borrownum, int maxnum);
    string getName();
    string getId();
    int getBorrowNum();
    int getMaxNum();
    int getAge();
    void setName(string name);
    void setId(string id);
    void setAge(int age);
    void setBorrowNum(int borrownum);
    void setMaxNum(int maxnum);
    void display();
    void borrowBook(Book& book);
    void returnBook(Book& book);
    void displayRecords();
};