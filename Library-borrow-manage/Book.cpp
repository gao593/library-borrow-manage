#include "Book.h"
#include<iostream>
#include<string>
Book::Book()
{
	m_title = "";
	m_author = "";
	m_publisher = "";
	m_id = "";
	m_year = 0;
	m_pages = 0;
	m_stock = 0;
	m_price = 0.0;
	m_Isborrowed = false;
}

Book::Book(string title, string author, string publisher, string id, int year, int pages, int stock, double price)
{
	m_title = title;
	m_author = author;
	m_publisher = publisher;
	m_id = id;
	m_year = year;
	m_pages = pages;
	m_stock = stock;
	m_price = price;
	m_Isborrowed = false;
}

string Book::getTitle()
{
	return m_title;
}

string Book::getAuthor()
{
	return m_author;
}

string Book::getPublisher()
{
	return m_publisher;
}

string Book::getId()
{
	return m_id;
}

int Book::getYear()
{
	return m_year;
}

int Book::getPages()
{
	return m_pages;
}

int Book::getStock()
{
	return m_stock;
}

double Book::getPrice()
{
	return m_price;
}

bool Book::getIsBorrowed()
{
	return m_Isborrowed;
}

void Book::setTitle(string title)
{
	m_title = title;
}

void Book::setAuthor(string author)
{
	m_author = author;
}

void Book::setPublisher(string publisher)
{
	m_publisher = publisher;
}

void Book::setId(string id)
{
	m_id = id;
}

void Book::setYear(int year)
{
	m_year = year;
}

void Book::setPages(int pages)
{
	m_pages = pages;
}

void Book::setStock(int stock)
{
	m_stock = stock;
}

void Book::setPrice(double price)
{
	m_price = price;
}

void Book::setIsBorrowed(bool Isborrowed)
{
	m_Isborrowed = Isborrowed;
}

void Book::display()
{
	cout << "Title: " << m_title << endl;
	cout << "Author: " << m_author << endl;
	cout << "Publisher: " << m_publisher << endl;
	cout << "ID: " << m_id << endl;
	cout << "Year: " << m_year << endl;
	cout << "Pages: " << m_pages << endl;
	cout << "Stock: " << m_stock << endl;
	cout << "Price: " << m_price << endl;
	if (m_Isborrowed) {
		cout << "The book is borrowed" << endl;
	} else {
		cout << "The book is available" << endl;
	}
}

















