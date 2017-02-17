//\begin{sourcecode}
#include "lab2.h"
void displayList(NODE* head)
{
    NODE* newnode = new NODE; 
    for(NODE* node = head; node ; node = node->next)
        std::cout << node->data << std::endl;
}
//\end{sourcecode}
