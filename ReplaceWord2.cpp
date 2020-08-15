#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "Enter Sentence: " << endl;
	char sentence[100];
	cin.getline(sentence, 100);
	cout << "Enter Word Which You Want To Replace: " << endl;
	char replaceWord[25];
	cin >> replaceWord;
	cout << "Enter Word Which Want To Place At The Place Of Replace Word: " << endl;
	char newWord[25];
	cin >> newWord;
	
	for (char * p = sentence; p != sentence + sizeof(sentence) / sizeof(sentence[0]); ++p)
	{
		
		cout << *p << endl;
	}
	return 0;
}
