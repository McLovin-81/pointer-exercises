#include <iostream>
#include <string>
#include <vector>
 
void sortByName(std::vector<std::string> *nameList);
 
int main()
{
    std::vector<std::string> names = {"felipe", "edna", "jackson", "lm", "cristian", "yurani", "cris"};
 
    for(std::string c : names)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
 
    sortByName(&names);
 
    for(std::string c : names)
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
 
return 0;
}
 

void sortByName(std::vector<std::string> *nameList)
{
    int nameListSize = nameList->size(); // Why no * needed?
 
    for(int i = 0; i < nameListSize -1; i++)
    {
        for(int j = i +1; j < nameListSize; j++)
        {
            if((*nameList)[i] > (*nameList)[j])
            {
                std::swap((*nameList)[i], (*nameList)[j]);
            }
        }
    }
}
