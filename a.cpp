
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "ddd.h"

int main()
{
	map<int, int> mmm;
	if(mmm.find(1) == mmm.end())
	{
		mmm[1]= 111;
	}
    cout << mmm[1] << endl;
    int a = 0;
	int b = 0;
	printf("asfdf\n");
	std::vector<int> vvv;
	auto f = [](int a1) ->bool { return a1 > 1;};

   vvv.push_back(1);
   vvv.push_back(2);

   vector<int> aa ={1,2,3,4};


	bool bb = std::all_of(vvv.begin(), vvv.end(),[&](int a)->bool {  return a > 1;});
	cout <<"B is bigger than 1: "<< bb << endl;

	auto ss = vvv.begin();
	while(ss !=vvv.end())
	{
		cout << *ss << endl;
		ss++;
	}

	AAA aaaaaa;


	return 0;

}

