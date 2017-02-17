//\begin{sourcecode}
#include "lab2.h"
bool insert(std::string s,NODE*& head)
{
    NODE* newnode = new NODE; 
    if(not newnode)
        return false;
    newnode->data = s;
    newnode->next = head;
    head = newnode;
    return true;
}
//\end{sourcecode}
