#include "SLList.h"
int main()
{
    {
        SLList<int> list;

        list.push_back(4);
        list.push_back(3);
        list.push_back(2);
        list.push_back(1);

        std::vector<int> flattened = list.flatten();

        //list.clear();

        std::vector<int> shouldBeEmpty = list.flatten();
    }

    int dummy0 = 0;

}