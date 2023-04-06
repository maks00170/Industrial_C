#include "raiiaction/raiiaction.hpp"
#include <map>


//std::map<std::string, std::function<void ()>> defs = {{}};

void def(int* val)
{
	std::cout << "data transformed" << std::endl;
    ++val;
}


int main()
{
    int counter = 0; 
	{  
		funcT cb = [&counter]  
		{
			def(&counter);
		};
		RAIIAction cleanup = RAIIAction(cb);
        //assert(counter == 0);
	}
    
    //assert(counter == 1);
	return 0;
}