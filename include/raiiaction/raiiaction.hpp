#pragma once
#include <iostream>
#include <functional>
#include <cassert>

using funcT = std::function<void ()>;
class RAIIAction
{
public:
	RAIIAction(funcT callback) : _callback(std::move(callback)) {if (_callback==nullptr) throw std::exception();}; // break
	~RAIIAction();
private:
	funcT _callback;
};