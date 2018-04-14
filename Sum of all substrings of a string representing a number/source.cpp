#include <iostream>

#include<vector> 
#include <boost/lexical_cast.hpp>
using namespace std;

int main() {

	string number;
  int testcases,sum;
  cin>>testcases;
  for(int k=0;k<testcases;k++)
    {
        sum=0;
        cin>>number;
        for(unsigned int i=0; i<number.length(); i++)
	   {
	        for(int j=0;j<number.length()-i;j++)
	        {          
	            sum =sum+(boost::lexical_cast<int>(number.substr(j,i+1)));
	        }
	    }
	    
	    cout<<sum<<endl;
    }
	return 0;
}
