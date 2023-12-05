// Name: Nathan Rowell CISC220 013

#include <iostream>
#include "MakeModel.hpp"
#include <time.h>
#include <stdlib.h>
#include "HashMap.hpp"

using namespace std;
int main() {
	srand(time(NULL));
	
	// Choose one of the 2 blocks to uncomment, depending on which input file
	// you'd like to run your hashmap on
	
	// Dr. Seuss input
	//makeModel voice1("C:\\Users\\natha\\Downloads\\HashMapProject\\DrSeuss.txt","C:\\Users\\natha\\Downloads\\HashMapProject\\Seussout_example.txt",true,true);
	//makeModel voice2("C:\\Users\\natha\\Downloads\\HashMapProject\\DrSeuss.txt","C:\\Users\\natha\\Downloads\\HashMapProject\\Seussout_example.txt",false,true);
	//makeModel voice3("C:\\Users\\natha\\Downloads\\HashMapProject\\DrSeuss.txt","C:\\Users\\natha\\Downloads\\HashMapProject\\Seussout_example.txt",true,false);
	//makeModel voice4("C:\\Users\\natha\\Downloads\\HashMapProject\\DrSeuss.txt","C:\\Users\\natha\\Downloads\\HashMapProject\\Seussout_example.txt",false,false);
	
	// OR
	
	// Great Expectations input
	//makeModel voice5("C:\\Users\\natha\\Downloads\\HashMapProject\\GEChap.txt","C:\\Users\\natha\\Downloads\\HashMapProject\\GEout_example.txt",true,true);
	//makeModel voice6("C:\\Users\\natha\\Downloads\\HashMapProject\\GEChap.txt","C:\\Users\\natha\\Downloads\\HashMapProject\\GEout_example.txt",false,true);
	//makeModel voice7("C:\\Users\\natha\\Downloads\\HashMapProject\\GEChap.txt","C:\\Users\\natha\\Downloads\\HashMapProject\\GEout_example.txt",true,false);
	makeModel voice8("C:\\Users\\natha\\Downloads\\HashMapProject\\GEChap.txt","C:\\Users\\natha\\Downloads\\HashMapProject\\GEout_example.txt",false,false);

	return 0;
}
