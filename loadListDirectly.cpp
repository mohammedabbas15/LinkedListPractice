//\begin{sourcecode}
#include "lab2.h"
bool loadListDirectly(std::string f, NODE*& head)
{
    std::ifstream ifs(f);
    if(not ifs) 
        return false;
    std::string s;
    while(ifs >> s)
    {
        insertAtEnd(s,head);
        }
    return true;
}
//\end{sourcecode}
