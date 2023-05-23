//
// Created by Sharll on 2023/5/13.
//

#ifndef UNTITLED6_POKFUNCTION_H
#define UNTITLED6_POKFUNCTION_H

#include <iostream>
#include <vector>
#include "PokStuff.h"

using namespace std;

class PokFunction {
public:
		virtual PokStuff* call(vector<PokStuff*> arguments) = 0;
};

#endif //UNTITLED6_POKFUNCTION_H
