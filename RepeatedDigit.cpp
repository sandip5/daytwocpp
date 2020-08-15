#include <iostream>
#include <vector>

using namespace std;

void printArray( vector<int> container ) {
	for( auto it = container.begin(); it != container.end(); it++) {
		cout << *it << " ";
	}
}

int main() {
	vector<int> container;
	
	for( int i = 1; i <= 100; i++ ) {
		if( i % 11 == 0 ) {
			container.push_back( i );
		}
	}
	
	printArray(container);
}
