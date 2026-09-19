#include "Book.h"
#include <iostream>
using namespace std;

int main()
{
    Book book1("C++ Primer", "Stanley Lippman", "Pearson", "B001", 2021, 1024, 8, 119.0);
    cout << "=====图书1信息=====" << endl;
    book1.display();
    Book book2("数据结构", "严蔚敏", "清华大学出版社", "B002", 2019, 340, 3, 45.5);
    cout << "=====图书2信息=====" << endl;
    book2.display();
    book2.setIsBorrowed(true);
    cout << "=====修改后图书2信息=====" << endl;
    book2.display();

    return 0;
}
