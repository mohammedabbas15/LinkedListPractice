//\begin{sourcecode}
#include "lab2.h"
int main()
{
    NODE* head = nullptr;
    NODE* tail = nullptr;
    if(loadListUsingInsert("cities.dat", head))
    {
        std::cout << "--Load List Using Insert--" << std::endl;
        displayList(head);
        destroyList(head, tail);
    }
    else 
        std::cout << "list not loaded" << std::endl;
    if(loadListDirectly("cities.dat", head))
    {
        std::cout << "--Load List Directly--" << std::endl;
        displayList(head);
        destroyList(head, tail);
    }
    else 
        std::cout << "list not loaded" << std::endl;
    if(loadListUsinginsertInOrder("cities.dat", head))
    {
        std::cout << "--Load List Using Insert In Order--" << std::endl;
        displayList(head);
        destroyList(head, tail);
    }
    else 
        std::cout << "list not loaded" << std::endl;
}
//\end{sourcecode}
