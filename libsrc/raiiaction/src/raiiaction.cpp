#include "raiiaction/raiiaction.hpp"


RAIIAction::~RAIIAction()
    {
		std::cout << "RAIIAction is going to die" << std::endl;
		_callback();
	}