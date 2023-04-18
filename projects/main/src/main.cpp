#include "raiiaction/raiiaction.hpp"
#include <map>

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
	}
    
	return 0;
}
