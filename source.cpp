#include <iostream>
#include<map>
#include<utility> //for pair
using namespace std;

int main() {

	string name="abcab";
	string temp;
	map <string, int> distinctpair;

	for(unsigned int i=0; i<name.length()-1; i++)
	{

		std::map<string, int>::iterator it = distinctpair.find(name.substr(i,2));
		if(it==distinctpair.end())
		{

			distinctpair.insert(make_pair(name.substr(i,2),1));
		}

		else
		{
			it->second=it->second+1;
		}


	}

	std::map<string, int>::iterator it;

	for(it=distinctpair.begin();it!=distinctpair.end();it++)
	{
		cout<<it->first<<"--->"<<it->second<<endl;
	}
	return 0;
}
