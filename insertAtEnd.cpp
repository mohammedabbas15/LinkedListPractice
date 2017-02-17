//\begin{sourcecode}
#include "lab2.h"
bool insertAtEnd(std::string s,NODE*& head)
{
    NODE* tail = nullptr;
    for(tail = head; tail and tail->next; tail = tail->next);
    
    NODE* newnode = new NODE; 
    if(not newnode)
        return false;
    newnode->data = s;
    newnode->next = nullptr;
    if(not tail)
    head = newnode;
    else tail->next = newnode;
    
    return true;
}
//head = new NODE;
//\end{sourcecode}
