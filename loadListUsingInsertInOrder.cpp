//\begin{sourcecode}
#include "lab2.h"
bool loadListUsinginsertInOrder(std::string f, NODE *&head)
{
    std::ifstream ifs(f); 
    if (not ifs) return false;
    std::string s;
    while(ifs >> s) {insertInOrder(head,s);}
    return true;
}
//\end{sourcecode}
