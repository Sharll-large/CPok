//
// Created by Sharll on 2023/5/13.
//

#ifndef UNTITLED6_INTEGER_H
#define UNTITLED6_INTEGER_H

#include "../../PokStuff.h"

class Integer: PokStuff {
public:
		long long val{};
		PokStuff * valueOf() override {
			return this;
		}
		string toString() override {
			return to_string(val);
		}
};

#endif //UNTITLED6_INTEGER_H
