/* Write a C++ program to find the largest word in a given string. */
#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

string Longest_Word(string text) {

	string temp;
	string result;
	int temp_len=0;
	int max_len=0;
	for(int i=0;i<text.size();i++)
	{
		if(text[i] != ' ' && (int(text[i]) >= 65 && int(text[i]) <= 90) || (int(text[i]) >= 97 && int(text[i]) <= 122) || (int(text[i] >= 48 && int(text[i]) <= 57)))
		{
			temp.push_back(text[i]);
		}
		else{
			temp_len = temp.size();
			max_len = max(max_len,temp_len);
			if(max_len==temp_len) // 
			{
				result = temp;
			}
			temp.clear(); // for clearing string value
		}

	}
	return result;
}

int main() {
	cout << "Original String: C++ is a general-purpose programming language. \nLongest word: " << Longest_Word("C++ is a general-purpose programming language.") << endl;
	return 0;
}
