#include <iostream>
#include "Library.h"
using namespace std;

int main()
{
    Library lib;

    Book b1("C++ Primer", "Lippman", "人民邮电出版社", "B001", 2019, 838, 5, 129.0);
    Book b2("数据结构", "严蔚敏", "清华大学出版社", "B002", 2018, 320, 3, 45.5);
    Book b3("操作系统", "汤小丹", "电子工业出版社", "B003", 2020, 408, 2, 49.0);

    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);

    cout << "===== 初始馆藏图书列表 =====" << endl;
    lib.showAllBooks();

    User u1("小明", "U001", 19, 0, 2);

    cout << "\n===== 用户信息 =====" << endl;
    u1.display();
    cout << "\n===== 尝试借阅 B001 =====" << endl;
    lib.lendBook(u1, "B001");
    u1.display();

    cout << "\n===== 尝试借阅 B002 =====" << endl;
    lib.lendBook(u1, "B002");
    u1.display();

    cout << "\n===== 尝试再借 B003（超过最大借书数量） =====" << endl;
    lib.lendBook(u1, "B003");
    u1.display();

    cout << "\n===== 当前馆藏 =====" << endl;
    lib.showAllBooks();

    cout << "\n===== 归还 B001 =====" << endl;
    lib.takeBackBook(u1, "B001");
    u1.display();

    cout << "\n===== 归还后馆藏 =====" << endl;
    lib.showAllBooks();

    return 0;
}
