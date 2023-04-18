#pragma once
#include <iostream>
#include <functional>
#include <cassert>

using funcT = std::function<void ()>;
class RAIIAction
{
public:
	RAIIAction(funcT callback) : _callback(callback) {};
	~RAIIAction();
private:
	funcT _callback;
};
