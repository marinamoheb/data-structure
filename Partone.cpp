#include<iostream>
#include"LinkedList.h"
using namespace std;

int main()
{
    
        LinkedList<int> firstLL;
        firstLL.lInsert(1);
        firstLL.lInsert(20);
        LinkedList<int> secondLL;
        secondLL.lInsert(3);
        secondLL.lInsert(4);
        concat(firstLL.gethead(), secondLL.gethead());
        cout << "-- " << endl;
        printLL(firstLL.gethead());
        firstLL.deleteFrom(1);
        cout << "-- " << endl;
        printLL(firstLL.gethead());
        firstLL.deleteKey(20);
        cout << "-- " << endl;
        printLL(firstLL.gethead());
        firstLL.insertInto(30, 1);
        cout << "-- " << endl;
        printLL(firstLL.gethead());
        firstLL.deleteFrom(10);
        firstLL.insertInto(40, 11);
        return 0;
}