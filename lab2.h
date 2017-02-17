//\begin{sourcecode}
#include <iostream>
#include <fstream>
#include <cstdlib>
struct NODE {std::string data; NODE* next;};
bool loadListUsingInsert(std::string,NODE*&);
bool insert(std::string,NODE*&);
void displayList(NODE*);
void destroyList(NODE*&, NODE*&);
bool insertAtEnd(std::string, NODE*&);
bool loadListDirectly(std::string, NODE*&);
bool insertInOrder(NODE *&, std::string);
bool loadListUsinginsertInOrder(std::string, NODE *&);
//\end{sourcecode}
