//\begin{sourcecode}
#include "lab2.h"
bool loadListUsingInsert(std::string f,NODE* &head)
{
    std::ifstream ifs(f);
    if(not ifs) 
        return false;
    std::string s;
    while(ifs >> s)
    {
        insert(s,head);
        }
    return true;
}
//\end{sourcecode}
