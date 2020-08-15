#include <iostream>
#include <cstring>

using namespace std;

int main() {
	string sentence;
	cin >> sentence;
	string enterWord;
	string word;
	cin >> enterWord;
	size_t found = sentence.find(enterWord); 
        cout << "First occurrence is " << found << endl;
	cin >> word;
	sentence.replace( found, word.size(), word );
	cout << sentence << endl;
}
