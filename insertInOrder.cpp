//\begin{sourcecode}
#include "lab2.h"
bool insertInOrder(NODE *&head, std::string data){
NODE *newnode;
newnode = new NODE;
if(not newnode){return false;}
newnode->data = data;
NODE *node = head, *prev = 0;
while(node && node->data <= data)
{prev = node; node = node->next;}
newnode->next = node;
if(prev)
{prev->next = newnode;}
else
head = newnode;
    return false;
}
//\end{sourcecode}
