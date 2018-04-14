#include <iostream>

#include<vector> 
using namespace std;

int main() {

	string name="abcd";
	string temp;
	vector<string> substrings;


	for(unsigned int i=0; i<name.length(); i++)
	{
	    for(int j=0;j<name.length()-i;j++)
	    {
	        substrings.push_back(name.substr(j,i+1));
	    }
	}

	std::vector<string>::iterator it;

	for(it=substrings.begin();it!=substrings.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}
