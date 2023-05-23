//
// Created by Sharll on 2023/5/13.
//

#ifndef UNTITLED6_NULL_H
#define UNTITLED6_NULL_H

#include "../../PokStuff.h"

class Null : PokStuff
{
public:
	PokStuff* valueOf() override {
		return nullptr;
	}
	string toString() override {
		return "Null";
	}
};

#endif //UNTITLED6_NULL_H
