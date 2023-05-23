/*
 * lex.cpp by sharll-large
 * parse pok codes
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

vector<char> alone = {'{', '}', '<', '>', '(', ')', '[', ']', ',', ';', '~', ':', '?', '-', '+', '*', '/'};
vector<char> quote_like = {'\'', '\"'};
vector<char> space_like = {' ', '\t', '\n', };

template<typename T>
bool find(vector<T> &set, T target) {
	return any_of(set.begin(), set.end(), [&](T t){return t == target;});
}

void push_if_not_null(vector<string> &target, const string& o) {
	if(!o.empty()) target.emplace_back(o);
}

vector<string> parse(const string& source){
	vector<string> result;
	string current;
	char in_quote = 0;

	for(char i: source) {
		if(!in_quote){
			if (find(space_like, i))
			{
				push_if_not_null(result, current);
				current = "";
			}
			else
			{
				if (find(alone, i))
				{
					push_if_not_null(result, current);
					current = "";
					result.emplace_back(1, i);
				}
				else
				{
					current += i;
					if(find(quote_like, i)){
						in_quote = i;
					}
				}
			}
		}else{
			if(i == in_quote) {
				push_if_not_null(result, current + i);
				current = "";
				in_quote = 0;
			} else {
				current += i;
			}
		}
	}
	if(in_quote) {
		cout << "Error: quote never closed.";
		return {};
	}
	return result;
}

string readfile(char *filename) {
	ifstream fin;
	fin.open(filename,ios::in);
	char c;
	string result;
	while(fin.get(c)) {
		result += c;
	}
	fin.close();
	return result;
}

int main(int argc, char *argv[]){
	if(argc < 2) {
		cout << "Usage: pok <file>";
		return 10;
	}
	cout << "File: " << argv[1] << endl;
	for(const string& i: parse(readfile(argv[1]))) cout << i << endl;
}


