#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_all.hpp>

#include "raiiaction/raiiaction.hpp"


void def(int* data, size_t size)
{
	for (size_t i=0; i<size; ++i)
	{
		data[i] = i * data[i];
	} 
	std::cout << "data transformed" << std::endl;
}


TEST_CASE("test", "[1]")
{
    int* ptr = new int[7];
	for (size_t i=0; i<7; ++i)
	{
		ptr[i] = i * i;
	}
	
	{ 
		funcT cb = [&ptr]   
		{
			def(ptr, 7);
		};
		RAIIAction cleanup = RAIIAction(cb);
        for (int i=0; i<7; ++i)
        {
        	CHECK(ptr[i] == i * i);  //0, 1, 8, 27, 64, 125, 216
        }
	}

    for (int i=0; i<7; ++i)
	{
		CHECK(ptr[i] == i * i * i);  //0, 1, 8, 27, 64, 125, 216
	}

	delete[] ptr;

}

TEST_CASE("test1", "[2]")
{
    int* ptr = new int[7];
	for (size_t i=0; i<7; ++i)
	{
		ptr[i] = i * i;
	}
	
	{ 
		CHECK_THROWS(RAIIAction(nullptr));
	}

	delete[] ptr;

}
