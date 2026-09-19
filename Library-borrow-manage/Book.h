#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
	string m_title;
	string m_author;
	string m_publisher;
	string m_id;
	int m_year;
	int m_pages;
    int m_stock;
	double m_price;
	bool m_Isborrowed;
	
public:
	Book();
	Book(string title, string author, string publisher, string id, int year, int pages, int stock, double price);
	string getTitle();
	string getAuthor();
	string getPublisher();
	string getId();
	int getYear();
	int getPages();
	int getStock();
	double getPrice();
	bool getIsBorrowed();
	void setTitle(string title);
	void setAuthor(string author);
	void setPublisher(string publisher);
	void setId(string id);
	void setYear(int year);
	void setPages(int pages);
	void setStock(int stock);
	void setPrice(double price);
	void setIsBorrowed(bool Isborrowed);
	void display();
};

