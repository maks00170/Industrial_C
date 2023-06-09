#pragma once
#include <iostream>
#include <functional>
#include <cassert>

using funcT = std::function<void ()>;
class RAIIAction
{
public:
	RAIIAction(funcT callback) : _callback(std::move(callback)) {
        if (callback == nullptr) throw std::exception();
    };
	~RAIIAction();
private:
	funcT _callback;
};
