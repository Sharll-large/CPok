//
// Created by Sharll on 2023/5/13.
//

#ifndef UNTITLED6_POKSTUFF_H
#define UNTITLED6_POKSTUFF_H

#include <iostream>

using namespace std;

// 内置基类，用于定义如指针，null，integer，string的内置基元

class PokStuff {
public:
		virtual PokStuff* valueOf(){};
		virtual string toString(){};
};



//PokStuff* parse(string c){
//	if(c == "Null") return (PokStuff*) new Null;
//}

#endif //UNTITLED6_POKSTUFF_H
