

#include "HashMap.hpp"
// Name: Nathan Rowell CISC220 013

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "HashNode.hpp"
using namespace std;


hashNode::hashNode(string s) {
	keyword = s;
	string* values = new string[100];
	valuesSize = 100;
	currSize = 0;
	srand(time(NULL));
}

hashNode::hashNode() {
	keyword = "";
    string* values = new string[100];
	valuesSize = 100;
	currSize = 0;
	srand(time(NULL));
}

hashNode::hashNode(string s, string v) {
	keyword = s;
	values = new string[100];
	values[0] = v;
	valuesSize = 100;
	currSize = 1;
}

hashNode::~hashNode() {
	delete [] values;
}

void hashNode::addValue(string v) {
    if (currSize < valuesSize) {
        values[currSize] = v;
        currSize += 1;
    }
    else {
        dblArray();
        values[currSize] = v;
        currSize += 1;
    }
	// adding a value to the end of the value array associated 
	// with a key
}

void hashNode::dblArray() {
    int newSize = valuesSize*2;
    string *newValues = new string[newSize];
    for (int i = 0; i < currSize; i++) {
        newValues[i] = values[i];
    }
    delete[] values;
    values = newValues;
    valuesSize = newSize;


	// when the value array gets full, you need to make a new 
	// array twice the size of the old one (just double, no 
	//going to next prime) and then copy over the old values 
	//to the new values, then de-allocate the old array.  
	//Again, just copying over, no hash functiosn involved 
	//here.
}

string hashNode::getRandValue() {

    if (currSize > 0) {
        int random = rand() % (currSize);
        return values[random];
    }
    else {
        return "";
    }

	//Every key has a values array - an array of words that 
	// follow that key in the text document.  You're going to 
	//randomly select one of those words and return it.  That 
	//will be the word that follows your key in your output 
	//function, and it will also be the next key.
}
